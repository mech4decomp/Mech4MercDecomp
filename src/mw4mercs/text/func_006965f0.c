/*
 * FUN_006965F0 (496 B) — __thiscall (ecx = this), 3 params (ret 0xc).
 *
 * String/object insertion routine: checks a flag via FUN_00696b20,
 * builds a string from a literal at 0x76b768, and inserts it into a
 * container via FUN_00694eb0 / FUN_00694da0 (with a grow path through
 * FUN_00696c40).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076b768;

extern void __cdecl FUN_00696b20(void);
extern void __cdecl FUN_00696900(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_00694eb0(void);
extern void __cdecl FUN_00694da0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_005cb3d0(void);
extern void __cdecl FUN_00696c40(void);

__declspec(naked) int __cdecl FUN_006965F0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_00696b20
        test    al, al
        je      L_6967d8
        mov     eax, dword ptr [esi + 8]
        mov     edx, dword ptr [esi + 4]
        lea     ebx, [esi + 4]
        sub     eax, edx
        test    eax, 0xfffffffc
        push    edi
        mov     dword ptr [esp + 0x10], 0
        mov     ecx, esi
        jne     L_6966e2
        call    FUN_00696900
        cmp     al, 1
        jne     L_69668d
        lea     ecx, [esp + 0xf]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_0076b768
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_0076b768
        push    ecx
        push    offset g_0076b768
        lea     ecx, [esp + 0x1c]
        call    FUN_005480c0
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esi]
        push    edx
        push    2
        and     ecx, 0xfffffffc
        call    FUN_00694eb0
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x14]
        jmp     L_6967a3
L_69668d:
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_0076b768
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_0076b768
        push    ecx
        push    offset g_0076b768
        lea     ecx, [esp + 0x1c]
        call    FUN_005480c0
        mov     edx, dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esi]
        push    edx
        push    2
        and     ecx, 0xfffffffc
        call    FUN_00694da0
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x14]
        jmp     L_6967a3
L_6966e2:
        call    FUN_00696900
        cmp     al, 1
        jne     L_69674d
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005cb1c0
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_0076b768
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_0076b768
        push    ecx
        push    offset g_0076b768
        lea     ecx, [esp + 0x20]
        call    FUN_00563480
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    eax
        mov     eax, dword ptr [esi + 8]
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [eax - 4]
        push    edx
        push    2
        call    FUN_00694eb0
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x14]
        jmp     L_6967a3
L_69674d:
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_005cb1c0
        mov     edx, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_0076b768
        repne   scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, offset g_0076b768
        push    ecx
        push    offset g_0076b768
        lea     ecx, [esp + 0x20]
        call    FUN_00563480
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi + 8]
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edx - 4]
        push    2
        call    FUN_00694da0
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x14]
L_6967a3:
        call    FUN_005cb3d0
        mov     eax, dword ptr [ebx + 4]
        cmp     eax, dword ptr [ebx + 8]
        pop     edi
        je      L_6967c9
        test    eax, eax
        je      L_6967bb
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax], ecx
L_6967bb:
        add     eax, 4
        pop     esi
        mov     dword ptr [ebx + 4], eax
        pop     ebx
        add     esp, 0x14
        ret     0xc
L_6967c9:
        push    1
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_00696c40
L_6967d8:
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
