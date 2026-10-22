/*
 * FUN_0042AE1B (166 B) — processes a value through lookup tables and calls a
 * virtual method on the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7da848;
extern int g_7b87ec;
extern void __cdecl FUN_00482160(void);
extern void __cdecl FUN_004912b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0042AE1B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x18
        push    esi
        mov     esi, dword ptr [esp+0x20]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00482160
        mov     eax, dword ptr [edi+0xa8]
        test    eax, eax
        je      L_ae99
        add     eax, 0xc
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_004912b0
        mov     eax, dword ptr [esp+8]
        and     eax, 0x3fff
        jg      L_ae57
        xor     eax, eax
        jmp     L_ae61
    L_ae57:
        mov     ecx, dword ptr [g_7da848]
        mov     eax, dword ptr [ecx+eax*4+0x24]
    L_ae61:
        mov     edx, dword ptr [eax+0x10]
        push    edx
        lea     ecx, [esp+0x28]
        call    FUN_00412570
        lea     eax, [esp+0x24]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp+0x2c]
        add     esp, 8
        test    eax, eax
        je      L_aea9
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_aea9
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_aea9
    L_ae99:
        mov     ecx, dword ptr [g_7b87ec]
        push    ecx
        push    esi
        call    FUN_00412a50
        add     esp, 8
    L_aea9:
        mov     edx, dword ptr [esi]
        push    4
        add     edi, 0xac
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        pop     edi
        pop     esi
        add     esp, 0x18
        ret     4
    }
}
