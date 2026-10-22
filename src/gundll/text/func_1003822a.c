/*
 * FUN_1003822a (56 B) — __stdcall. Initializes the CRT __fptrap table
 * with float-conversion helper addresses.
 */

extern int g_10051dbc;
extern int g_10051db8;
extern int g_10051dc0;
extern int g_10051dc4;
extern int g_10051dc8;
extern int g_10051dcc;

__declspec(naked) void __stdcall FUN_1003822a(void)
{
    __asm {
        mov     eax, 0x1003b43f
        mov     dword ptr [g_10051dbc], 0x1003b0e9
        mov     dword ptr [g_10051db8], eax
        mov     dword ptr [g_10051dc0], 0x1003b14f
        mov     dword ptr [g_10051dc4], 0x1003b08f
        mov     dword ptr [g_10051dc8], 0x1003b137
        mov     dword ptr [g_10051dcc], eax
        ret
    }
}
