md build
cd build
cmake -G  "cmake "-G" "Visual Studio %VS_VERSION% Win64" "%INTEL_OPENVINO_DIR%\deployment_tools\inference_engine\samples"" ..
cmake --build .