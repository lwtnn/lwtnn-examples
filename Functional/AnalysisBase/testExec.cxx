// Include the headers needed for functional model
#include "lwtnn/LightweightGraph.hh"
#include "lwtnn/parse_json.hh"
#include <fstream> 
#include <iostream>

int main() {

  // Define some variables, often in a header file
  std::map<std::string, std::map<std::string, double> > inputs;
  std::map<std::string, std::map<std::string, std::vector<double>> > input_sequences;


   // Read in the network file
   std::string in_file_name("../test_NN.json");
   std::ifstream in_file(in_file_name);
   // For the functional model you need to define an
   // output node.
   std::string output_to_get = "DL1_shared_0";
   auto config = lwt::parse_json_graph(in_file);
   lwt::LightweightGraph graph(config, output_to_get);

   // Define some sequences used for the recurrent NN
   input_sequences["node_0"] = {
      {"variable_0",{1.2,1.2,1.2,1.2}},
      {"variable_1",{1.2,1.2,1.2,1.2}},  
      {"variable_2",{1.2,1.2,1.2,1.2}},
      {"variable_3",{1.2,1.2,1.2,1.2}}
   };

   // More variables for the two other inputs defined
   inputs["node_0"] = {{"variable_0",1.5}};
   inputs["node_1"] = {{"variable_0",1.5},{"variable_1",1.5},{"variable_2",1.5}};

   // Calculate the output value of the NN based on the inputs given
   // and show some eye candy
   std::cout << output_to_get << ":" << std::endl;
   auto outputs = graph.compute(inputs,input_sequences);
   for (const auto& out: outputs) {
      std::cout << out.first << " " << out.second << std::endl;
   }

   return 0;
}

