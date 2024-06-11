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
                junit 'build/app1/test_results.xml'
            }
        }
    }
}
