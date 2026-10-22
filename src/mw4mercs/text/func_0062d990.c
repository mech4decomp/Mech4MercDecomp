/*
 * FUN_0062d990 (98 B) — __cdecl, 1 param.
 *
 * XOR-obfuscated global table lookup. If [table+0x16] != 0, set
 * [table + 0x3543 + param_1*0x2038] = 1; else set [table+0x3514]=3 and
 * virtual-call vtable[0x2c](1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;

__declspec(naked) void FUN_0062d990(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        mov     ecx, dword ptr [eax]
        jz      L_d9d1
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, eax
        shl     edx, 0x7
        add     edx, eax
        xor     ecx, 0x85739531
        shl     edx, 0x3
        sub     edx, eax
        mov     byte ptr [ecx + edx*8 + 0x3543], 0x1
        ret
    L_d9d1:
        mov     eax, dword ptr [eax]
        xor     ecx, 0x85739531
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x3514], 0x3
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx + 0x2c]
        ret
    }
}
