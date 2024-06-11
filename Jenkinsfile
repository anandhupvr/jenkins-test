pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'bash ./build.sh'
            }
        }

        stage('Test') {
            steps {
                sh 'bash ./run_tests.sh'
            }
        }
    }
}
