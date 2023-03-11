// Require the axios library
const axios = require('axios');

// Create a test suite for OpenStreetMap API tests
describe('OpenStreetMap API tests', () => {
    // Test for a correct node query
    test('Correct node query', async () => {
        // Send a GET request to the specified URL and await the response
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/node/9876');
        // Expect the response status to be 200 (OK)
        expect(response.status).toBe(200);
        // Expect the response data to match the expected node data
        expect(response.data).toMatchObject({
            // expected node data
        });
    });

    // Test for an incorrect node query
    test('Incorrect node query', async () => {
        // Send a GET request to the specified URL and await the response
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/node/invalid-id');
        // Expect the response status to be 400 (Bad Request)
        expect(response.status).toBe(400);
        // Expect the response data to match the expected error message
        expect(response.data).toMatchObject({
            // expected error message
        });
    });

    // Test for a correct way query
    test('Correct way query', async () => {
        // Send a GET request to the specified URL and await the response
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/way/6543');
        // Expect the response status to be 200 (OK)
        expect(response.status).toBe(200);
        // Expect the response data to match the expected way data
        expect(response.data).toMatchObject({
            // expected way data
        });
    });

    // Test for an incorrect way query
    test('Incorrect way query', async () => {
        // Send a GET request to the specified URL and await the response
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/way/invalid-id');
        // Expect the response status to be 400 (Bad Request)
        expect(response.status).toBe(400);
        // Expect the response data to match the expected error message
        expect(response.data).toMatchObject({
            // expected error message
        });
    });

    // Test for a correct map query
    test('Correct map query', async () => { // Declares a new test case for a correct map query
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/map?bbox=-80,20,-70,30'); // Sends a GET request to the OpenStreetMap API with the specified bounding box coordinates
        expect(response.status).toBe(200); // Expects the response status code to be 200 (OK)
        expect(response.data).toMatchObject({ // Expects the response data to match the specified object (i.e., contains the expected map data)
            // expected map data
        });
    });

    test('Incorrect map query', async () => { // Declares a new test case for an incorrect map query
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/map?bbox=invalid-bbox'); // Sends a GET request to the OpenStreetMap API with an invalid bounding box parameter
        expect(response.status).toBe(400); // Expects the response status code to be 400 (Bad Request)
        expect(response.data).toMatchObject({ // Expects the response data to match the specified object (i.e., contains the expected error message)
            // expected error message
        });
    });

    // Test for a correct relation query
    test('Correct relation query', async () => {
        // Send a GET request to the specified URL and await the response
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/relation/2109');
        // Expect the response status to be 200 (OK)
        expect(response.status).toBe(200);
        // Expect the response data to match the expected relation data
        expect(response.data).toMatchObject({
            // expected relation data
        });
    });

    // Test for an incorrect relation query
    test('Incorrect relation query', async () => {
        // Send a GET request to the specified URL and await the response
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/relation/invalid-id');
        // Expect the response status to be 400 (Bad Request)
        expect(response.status).toBe(400);
        // Expect the response data to match the expected error message
        expect(response.data).toMatchObject({
            // expected error message
        });
    });

    test('Correct track query', async () => { // Declares a new test case for a correct track query
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/trackpoints?bbox=-80,20,-70,30'); // Sends a GET request to the OpenStreetMap API with the specified bounding box coordinates
        expect(response.status).toBe(200); // Expects the response status code to be 200 (OK)
        expect(response.data).toMatchObject({ // Expects the response data to match the specified object (i.e., contains the expected track data)
            // expected track data
        });
    });

    test('Incorrect track query', async () => { // Declares a new test case for an incorrect track query
        const response = await axios.get('https://api.openstreetmap.org/api/0.6/trackpoints?bbox=invalid-bbox'); // Sends a GET request to the OpenStreetMap API with an invalid bounding box parameter
        expect(response.status).toBe(400); // Expects the response status code to be 400 (Bad Request)
        expect(response.data).toMatchObject({ // Expects the response data to match the specified object (i.e., contains the expected error message)
            error: "The requested bbox parameter is invalid"  // expected error message
        });
    });
});
