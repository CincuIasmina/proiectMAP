FROM gcc:latest
WORKDIR /usr/src/proiect
COPY Source.cpp .
RUN  g++ Source.cpp -o Source
CMD ["./Source"]