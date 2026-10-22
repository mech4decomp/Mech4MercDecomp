/*
 * FUN_10022380 (187 B) - __stdcall, RET 0x10 (4 args).  Buffer-parse/format
 * helper: calls FUN_1001c7a0, FUN_1002af80, FUN_1001c660 with GUIDs and
 * buffer pointers, advancing ebp/ebx by parsed counts; frees via
 * FUN_10001d60 on mismatch.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10022380(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp+0x18]
        push    ebp
        mov     ebp, dword ptr [esp+0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x1c]
        xor     eax, eax
        mov     dword ptr [esp+0x14], eax
        mov     dword ptr [esp+0x10], eax
        lea     eax, [esp+0x10]
        push    eax
        push    ebx
        push    0x1004a6f0
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_41d
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [edi+0x24]
        lea     ecx, [esp+0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp+0x2c], eax
        lea     ebp, [ebp+eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_41d
        mov     eax, dword ptr [edi+0x28]
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, dword ptr [edi+0x20]
        push    eax
        push    0x10049c2c
        push    ecx
        push    0x10049e50
        push    edx
        push    0x10049bc4
        push    0x10050f68
        lea     eax, [esp+0x2c]
        push    eax
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_41d
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x24]
        mov     eax, dword ptr [esp+0x28]
        add     edx, ecx
        mov     dword ptr [eax], edx
L_41d:
        mov     eax, dword ptr [esp+0x14]
        cmp     eax, dword ptr [edi+0x24]
        je      L_42f
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_42f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
