/*
 * FUN_10038987 (436 B) __cdecl.
 * Command-line tokenizer: splits a string into whitespace-delimited
 * tokens, honoring double-quote quoting and backslash escapes. Uses the
 * character-classification table at 0x10076981 (bit 0x4 = special char).
 *
 * CFLAGS: /O1
 */

extern unsigned char g_10076981;   /* DAT_10076981 char-class table */

__declspec(naked) void __cdecl FUN_10038987(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        push    ebx
        push    esi
        and     dword ptr [ecx], 0
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     dword ptr [eax], 0x1
        mov     eax, dword ptr [ebp + 0x8]
        test    edi, edi
        jz      L_100389b1
        mov     dword ptr [edi], esi
        add     edi, 0x4
        mov     dword ptr [ebp + 0xc], edi
    L_100389b1:
        cmp     byte ptr [eax], 0x22
        jnz     L_100389fa
    L_100389b6:
        mov     dl, byte ptr [eax + 0x1]
        inc     eax
        cmp     dl, 0x22
        jz      L_100389e8
        test    dl, dl
        jz      L_100389e8
        movzx   edx, dl
        test    byte ptr [edx + g_10076981], 0x4
        jz      L_100389db
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_100389db
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        inc     eax
    L_100389db:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_100389b6
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        jmp     L_100389b6
    L_100389e8:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_100389f2
        and     byte ptr [esi], 0
        inc     esi
    L_100389f2:
        cmp     byte ptr [eax], 0x22
        jnz     L_10038a3d
        inc     eax
        jmp     L_10038a3d
    L_100389fa:
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_10038a05
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
    L_10038a05:
        mov     dl, byte ptr [eax]
        inc     eax
        movzx   ebx, dl
        test    byte ptr [ebx + g_10076981], 0x4
        jz      L_10038a20
        inc     dword ptr [ecx]
        test    esi, esi
        jz      L_10038a1f
        mov     bl, byte ptr [eax]
        mov     byte ptr [esi], bl
        inc     esi
    L_10038a1f:
        inc     eax
    L_10038a20:
        cmp     dl, 0x20
        jz      L_10038a2e
        test    dl, dl
        jz      L_10038a32
        cmp     dl, 0x9
        jnz     L_100389fa
    L_10038a2e:
        test    dl, dl
        jnz     L_10038a35
    L_10038a32:
        dec     eax
        jmp     L_10038a3d
    L_10038a35:
        test    esi, esi
        jz      L_10038a3d
        and     byte ptr [esi - 0x1], 0
    L_10038a3d:
        and     dword ptr [ebp + 0x18], 0
    L_10038a41:
        cmp     byte ptr [eax], 0
        jz      L_10038b2a
    L_10038a4a:
        mov     dl, byte ptr [eax]
        cmp     dl, 0x20
        jz      L_10038a56
        cmp     dl, 0x9
        jnz     L_10038a59
    L_10038a56:
        inc     eax
        jmp     L_10038a4a
    L_10038a59:
        cmp     byte ptr [eax], 0
        jz      L_10038b2a
        test    edi, edi
        jz      L_10038a6e
        mov     dword ptr [edi], esi
        add     edi, 0x4
        mov     dword ptr [ebp + 0xc], edi
    L_10038a6e:
        mov     edx, dword ptr [ebp + 0x14]
        inc     dword ptr [edx]
        mov     dword ptr [ebp + 0x8], 0x1
    L_10038a73:
        xor     ebx, ebx
    L_10038a7c:
        cmp     byte ptr [eax], 0x5c
        jnz     L_10038a85
        inc     eax
        inc     ebx
        jmp     L_10038a7c
    L_10038a85:
        cmp     byte ptr [eax], 0x22
        jnz     L_10038ab6
        test    bl, 0x1
        jnz     L_10038ab4
        xor     edi, edi
        cmp     dword ptr [ebp + 0x18], edi
        jz      L_10038aa3
        cmp     byte ptr [eax + 0x1], 0x22
        lea     edx, [eax + 0x1]
        jnz     L_10038aa3
        mov     eax, edx
        jmp     L_10038aa6
    L_10038aa3:
        mov     dword ptr [ebp + 0x8], edi
    L_10038aa6:
        mov     edi, dword ptr [ebp + 0xc]
        xor     edx, edx
        cmp     dword ptr [ebp + 0x18], edx
        setz    dl
        mov     dword ptr [ebp + 0x18], edx
    L_10038ab4:
        shr     ebx, 0x1
    L_10038ab6:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_10038acb
    L_10038abe:
        inc     ebx
        test    esi, esi
        jz      L_10038ac6
        mov     byte ptr [esi], 0x5c
        inc     esi
    L_10038ac6:
        inc     dword ptr [ecx]
        dec     ebx
        __emit 0x75          /* __emit: backward jnz rel8 miscomputed by MSVC6 (off-by-1); ref 75 F3 */
        __emit 0xF3
    L_10038acb:
        mov     dl, byte ptr [eax]
        test    dl, dl
        jz      L_10038b1b
        cmp     dword ptr [ebp + 0x18], 0
        jnz     L_10038ae1
        cmp     dl, 0x20
        jz      L_10038b1b
        cmp     dl, 0x9
        jz      L_10038b1b
    L_10038ae1:
        cmp     dword ptr [ebp + 0x8], 0
        jz      L_10038b15
        test    esi, esi
        jz      L_10038b04
        movzx   ebx, dl
        test    byte ptr [ebx + g_10076981], 0x4
        jz      L_10038afd
        mov     byte ptr [esi], dl
        inc     esi
        inc     eax
        inc     dword ptr [ecx]
    L_10038afd:
        mov     dl, byte ptr [eax]
        mov     byte ptr [esi], dl
        inc     esi
        jmp     L_10038b13
    L_10038b04:
        movzx   edx, dl
        test    byte ptr [edx + g_10076981], 0x4
        jz      L_10038b13
        inc     eax
        inc     dword ptr [ecx]
    L_10038b13:
        inc     dword ptr [ecx]
    L_10038b15:
        inc     eax
        __emit 0xE9          /* __emit: backward jmp rel32 miscomputed by MSVC6 (off-by-7, relocs between branch and target); ref E9 58 FF FF FF */
        __emit 0x58
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    L_10038b1b:
        test    esi, esi
        jz      L_10038b23
        and     byte ptr [esi], 0
        inc     esi
    L_10038b23:
        inc     dword ptr [ecx]
        jmp     L_10038a41
    L_10038b2a:
        test    edi, edi
        jz      L_10038b31
        and     dword ptr [edi], 0
    L_10038b31:
        mov     eax, dword ptr [ebp + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        inc     dword ptr [eax]
        pop     ebp
        ret
    }
}
