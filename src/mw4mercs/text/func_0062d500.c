/*
 * FUN_0062D500 (134 B) — Initializes a global structure via XOR-obfuscated
 * pointer at 0x7DAB44/0x7DAB40, using FUN_0041eb40 and FUN_00707e70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __cdecl FUN_0062d500(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    0x20
        lea     eax, [esp + 0xc]
        push    eax
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_0041eb40
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [esp + 0x20]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [DAT_007dab40]
        xor     edi, edi
        fst     dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        xor     edx, esi
        fstp    dword ptr [esp + 0x14]
        mov     esi, dword ptr [edx + 0x20]
        xor     esi, 0x85739531
        mov     eax, dword ptr [esi + 0x21e0]
        add     esi, 0x21b8
        cmp     eax, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0xc], edi
        jz      L_62d56a
        push    edi
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x18]
L_62d56a:
        mov     dword ptr [esi + 0x20], edi
        mov     dword ptr [esi + 0x10], edi
        push    edi
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x14], edi
        call    FUN_00707e70
        fsub    dword ptr [esp + 0x14]
        pop     edi
        fstp    qword ptr [esi]
        pop     esi
        pop     ecx
        ret
    }
}
