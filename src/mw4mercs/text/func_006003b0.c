/*
 * FUN_006003B0 (235 B) — 3 stack params (__stdcall). Looks up an entry in
 * a table, lazily allocates/initializes a 0x30-byte object (copied from
 * DAT_007b8c98), and writes scaled float values into it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7da848;   /* DAT_007da848 */
extern char  g_7b8c98;   /* DAT_007b8c98 (source of 0x30-byte template) */

extern void __cdecl FUN_0048fac0(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006003B0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x229C]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [ecx + edi*4]
        test    ebp, ebp
        lea     esi, [ecx + edi*4]
        mov     dword ptr [esp + 0xC], esi
        jnz     L_448
        mov     edx, dword ptr [eax + 0x2294]
        mov     eax, dword ptr [edx + edi*4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x10]
        test    ebx, ebx
        jz      L_3E4
        inc     byte ptr [ebx - 0x1]
L_3E4:
        mov     ecx, dword ptr [g_7da848]
        push    0x0
        push    ebx
        call    FUN_0048fac0
        mov     ebp, eax
        test    ebp, ebp
        jz      L_428
        mov     eax, dword ptr [ebp + 0x28]
        test    eax, eax
        mov     byte ptr [ebp + 0x24], 0x0
        jnz     L_426
        push    0x30
        call    FUN_004084d0
        mov     ecx, 0xC
        mov     esi, OFFSET g_7b8c98
        mov     edi, eax
        rep movsd
        mov     esi, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x20]
        add     esp, 0x4
        mov     dword ptr [ebp + 0x28], eax
L_426:
        mov     dword ptr [esi], ebp
L_428:
        test    ebx, ebx
        jz      L_43F
        mov     al, byte ptr [ebx - 0x1]
        dec     ebx
        dec     al
        mov     byte ptr [ebx], al
        jnz     L_43F
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_43F:
        test    ebp, ebp
        pop     ebx
        jz      L_496
        mov     eax, dword ptr [esp + 0x1C]
L_448:
        mov     ecx, dword ptr [eax + 0x22A4]
        mov     eax, dword ptr [ebp + 0x28]
        fld     dword ptr [ecx + edi*4]
        test    eax, eax
        fstp    dword ptr [esp + 0x18]
        mov     byte ptr [ebp + 0x24], 0x0
        jnz     L_47B
        push    0x30
        call    FUN_004084d0
        mov     ecx, 0xC
        mov     esi, OFFSET g_7b8c98
        mov     edi, eax
        add     esp, 0x4
        mov     dword ptr [ebp + 0x28], eax
        rep movsd
L_47B:
        mov     eax, dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [eax + 0x8]
        mov     ebp, dword ptr [ebp + 0x28]
        fstp    dword ptr [ebp + 0xC]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [eax + 0x10]
        fstp    dword ptr [ebp + 0x1C]
L_496:
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret
    }
}
