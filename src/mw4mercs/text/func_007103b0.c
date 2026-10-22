/*
 * FUN_007103b0 (216 B) — Builds a float/int struct on the stack and
 * passes it to FUN_0074c120.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_87bc48;
extern void __cdecl FUN_0074c120(void);

__declspec(naked) void __stdcall FUN_007103b0(void)
{
    __asm {
        sub     esp, 0x88
        fild    dword ptr [esp + 0x8c]
        mov     edx, dword ptr [esp + 0x98]
        push    edi
        xor     eax, eax
        mov     ecx, 0x20
        lea     edi, [esp + 0xc]
        rep stosd
        fst     dword ptr [esp + 0xc]
        fild    dword ptr [esp + 0x94]
        mov     ecx, dword ptr [g_87bc48]
        fst     dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 0xa0]
        fstp    dword ptr [esp + 0x10]
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x94]
        fstp    dword ptr [esp + 0x2c]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x98]
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [esp + 0x90]
        add     ecx, edx
        fild    dword ptr [esp + 4]
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esp + 0x18], 0x3f800000
        fst     dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x38], 0x3f800000
        fild    dword ptr [esp + 4]
        mov     dword ptr [esp + 0x58], 0x3f800000
        mov     dword ptr [esp + 0x78], 0x3f800000
        mov     dword ptr [esp + 0x1c], eax
        fst     dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [esp + 0x6c], edx
        fstp    dword ptr [esp + 0x4c]
        lea     edx, [esp + 0xc]
        push    edx
        fstp    dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x74], ecx
        mov     dword ptr [esp + 0x80], eax
        call    FUN_0074c120
        pop     edi
        add     esp, 0x88
        ret     0x14
    }
}
