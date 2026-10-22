/*
 * FUN_0066BA60 (309 B) — __thiscall (ECX = this), RET 0x10 (four stack params).
 * Parses animation data: looks up "AnimType"/"Start" strings, builds an
 * anim object, and iterates a linked list of "Curve"/"CurveMask" entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b2b0;   /* IAT: _strnicmp */
extern int DAT_0076b2dc;   /* IAT: sscanf */
extern int DAT_0076b2d8;   /* IAT: atof */
extern int DAT_0076b2ac;   /* IAT: _stricmp */
extern void *__fastcall FUN_00767d20(void *this);
extern void *__fastcall FUN_0066afa0(void *this);
extern void *__fastcall FUN_0066b130(void *this);
extern void __fastcall FUN_0066bd70(void *this);
extern void __fastcall FUN_0066bdd0(void *this);

__declspec(naked) void __fastcall FUN_0066ba60(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0x796e48
        mov     ecx, ebx
        call    FUN_00767d20
        mov     eax, dword ptr [eax + 4]
        mov     edi, dword ptr [esi + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_0066afa0
        mov     ebp, eax
        push    ebp
        mov     ecx, edi
        call    FUN_0066b130
        mov     ecx, dword ptr [edi + 0x30]
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, eax
        mov     dword ptr [ecx + edx*4], esi
        push    0x796eac
        mov     ecx, ebx
        mov     dword ptr [esi + 4], ebp
        call    FUN_00767d20
        mov     ebp, dword ptr [eax + 4]
        push    5
        push    0x796ea4
        push    ebp
        call    dword ptr [DAT_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jnz     L_bd9
        mov     dword ptr [esi + 0x10], eax
        lea     eax, [esi + 0xc]
        push    eax
        push    0x796e98
        push    ebp
        call    dword ptr [DAT_0076b2dc]
        add     esp, 0xc
        jmp     L_baed
    L_bd9:
        push    ebp
        mov     dword ptr [esi + 0xc], 0xffffffff
        call    dword ptr [DAT_0076b2d8]
        fstp    dword ptr [esi + 0x10]
        add     esp, 4
    L_baed:
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        push    eax
        push    ebx
        push    edi
        mov     ecx, esi
        call    dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        mov     ebx, dword ptr [ebx + 4]
        test    ebx, ebx
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [esi + 0x14], 0
        jz      L_bb85
    L_bb15:
        lea     eax, [ebx + 8]
        push    0x796e90
        push    eax
        call    dword ptr [DAT_0076b2ac]
        add     esp, 8
        test    eax, eax
        jnz     L_bb50
        mov     ebp, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ebx + 4]
        mov     eax, dword ptr [esp + 0x14]
        add     eax, ebp
        push    edx
        mov     edx, dword ptr [edi + 0x34]
        lea     ecx, [eax + eax*2]
        lea     ecx, [edx + ecx*8]
        call    FUN_0066bd70
        inc     ebp
        mov     dword ptr [esi + 0x14], ebp
        mov     ebp, dword ptr [esp + 0x14]
        jmp     L_bb7f
    L_bb50:
        lea     eax, [ebx + 8]
        push    0x796e84
        push    eax
        call    dword ptr [DAT_0076b2ac]
        add     esp, 8
        test    eax, eax
        jnz     L_bb7f
        mov     eax, dword ptr [ebx + 4]
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [edi + 0x34]
        push    eax
        mov     eax, ebp
        add     eax, ecx
        lea     ecx, [eax + eax*2]
        lea     ecx, [edx + ecx*8]
        call    FUN_0066bdd0
    L_bb7f:
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jnz     L_bb15
    L_bb85:
        add     ebp, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
