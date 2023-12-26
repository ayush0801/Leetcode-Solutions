const expect = (val) => {
    return{
        toBe: (a) => {
            if(val!==a) throw new Error("Not Equal");
            else return true;
        },
        notToBe: (b) => {
            if(val===b) throw new Error("Equal");
            else return true;
        }
    }
};