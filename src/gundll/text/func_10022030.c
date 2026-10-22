/*
 * FUN_10022030 (302 B) - __stdcall, RET 0x10 (4 args).  Buffer-parse/format
 * helper: calls FUN_1001ca30, FUN_1002af80, FUN_1001c660, FUN_1002def0,
 * FUN_1001c660 with GUIDs and buffer pointers, advancing ebp/edi by parsed
 * counts; frees via FUN_10001d60 on mismatch.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __stdcall FUN_1002def0(void); /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10022030(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    ebp
        mov     ebp, dword ptr [esp+0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x24]
        xor     eax, eax
        mov     dword ptr [esp+0x14], eax
        mov     dword ptr [esp+0x10], eax
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        push    0x1004a898
        push    ebp
        push    ebx
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_140
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [ebx+0x20]
        lea     ecx, [esp+0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp+0x2c], eax
        lea     ebp, [ebp+eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_140
        mov     eax, dword ptr [ebx+0x2c]
        mov     ecx, dword ptr [ebx+0x24]
        mov     edx, dword ptr [esp+0x14]
        push    eax
        mov     eax, dword ptr [ebx+0x1c]
        push    0x10049eb0
        push    ecx
        push    0x10049d00
        push    edx
        push    0x10049cf8
        push    eax
        push    0x10049d10
        push    0x10050f18
        lea     ecx, [esp+0x34]
        push    ecx
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_140
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [ebx+0x28]
        mov     esi, dword ptr [esp+0x24]
        push    edx
        add     esi, eax
        lea     ebp, [ebp+eax*2]
        sub     edi, eax
        push    0x10049e48
        lea     eax, [esp+0x18]
        push    eax
        push    edi
        push    ebp
        mov     dword ptr [esp+0x38], esi
        call    FUN_1002def0
        mov     esi, eax
        test    esi, esi
        jl      L_140
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x24]
        add     ecx, eax
        push    0x1004a898
        mov     dword ptr [esp+0x28], ecx
        push    0x10050244
        lea     ecx, [esp+0x18]
        push    ecx
        sub     edi, eax
        lea     ebp, [ebp+eax*2]
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L_140
        mov     edx, dword ptr [esp+0x10]
        mov     eax, dword ptr [esp+0x24]
        mov     ecx, dword ptr [esp+0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_140:
        mov     eax, dword ptr [esp+0x14]
        cmp     eax, dword ptr [ebx+0x20]
        je      L_152
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_152:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
