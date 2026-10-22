/*
 * FUN_005140C0 (110 B @ 0x5140c0) - __stdcall, RET 0xc. Walks an XOR-obfuscated
 * object graph (key 0x85739531), optionally calls a virtual method, then clears
 * a field. (Block 0x513F1F is 262 B and contains two more functions at
 * 0x514130/0x514160.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004c8e90(void);
extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_005140C0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        je      L_514106
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x17]
        test    cl, cl
        jne     L_514106
        mov     eax, dword ptr [eax + 0x14]
        xor     eax, 0x85739531
        je      L_5140fc
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
L_5140fc:
        push    5
        call    FUN_004c8e90
        add     esp, 4
L_514106:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     dword ptr [edx + 0x3024], 0
        mov     eax, 1
        ret     0xc
    }
}
