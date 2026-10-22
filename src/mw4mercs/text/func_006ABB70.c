/*
 * FUN_006ABB70 (extent 0x6ABB70-0x6ABDCF, 607 bytes) - ANIM in-.text block.
 * __thiscall-style (ecx = this), ret 0xc. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern float *g_0076b2d8;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004da880(void);
extern void __cdecl FUN_0066b370(void);
extern void __cdecl FUN_00767d20(void);

__declspec(naked) void func_006ABB70(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, ecx
        push    0x796e48
        mov     ecx, esi
        call    FUN_00767d20
        push    0x76ff64
        mov     ecx, esi
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [edi + 0x60]
        add     esp, 4
        push    0x799f30
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x18]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0xc]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        call    FUN_0066b370
        mov     dword ptr [edi + 0x3c], eax
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jne     L_bd76
        push    0x799f28
        mov     ecx, esi
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x18]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x1c]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     ecx, ebx
        call    FUN_0066b370
        push    0x799f1c
        mov     ecx, esi
        mov     dword ptr [edi + 0x38], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x18]
        push    0x799e90
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_bca7
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_bca7
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bca7:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     ecx, ebx
        call    FUN_0066b370
        push    0x799f10
        mov     ecx, esi
        mov     dword ptr [edi + 0x40], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x18]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_bd07
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_bd07
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bd07:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, ebx
        call    FUN_0066b370
        push    0x799f04
        mov     ecx, esi
        mov     dword ptr [edi + 0x44], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x18]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_bd67
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_bd67
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bd67:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     ecx, ebx
        call    FUN_0066b370
        mov     dword ptr [edi + 0x48], eax
L_bd76:
        push    0x799ef8
        mov     ecx, esi
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        mov     ebx, dword ptr [ebx + 0x18]
        push    eax
        mov     ecx, ebx
        call    FUN_004da880
        push    0x799eec
        mov     ecx, esi
        mov     dword ptr [edi + 0x30], eax
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        push    eax
        mov     ecx, ebx
        call    FUN_004da880
        mov     dword ptr [edi + 0x34], eax
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        je      L_bdcb
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_bdcb
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bdcb:
        pop     ecx
        ret     0xc
    }
}
