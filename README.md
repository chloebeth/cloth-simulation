# cloth-simulation

TO RUN ui.c in ondemand: <br>
module load cuda
module load virtualgl
nvcc ui.c -lm -lGL -lGLU -lglut
