/*
 * FUN_5e032d96 (719 B) - localized string-table formatter. Walks the format
 * string, counts runs of identical chars, and dispatches each run to
 * FUN_5e0328c8 (or copies it literally), using the string-table structure
 * at param_5 and the DAT_5e77abdc '#' flag.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abdc;   /* DAT_5e77abdc */
extern int g_5e0391c0;   /* PTR_DAT_5e0391c0 (char-class table) */
extern char g_5e036e88;  /* "am/pm" */
extern char g_5e036e84;  /* string */

extern int __cdecl FUN_5e033510(void *, void *);
extern void __cdecl FUN_5e0328c8(int, int, int, int, int);

__declspec(naked) void FUN_5e032d96(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ebp+0x8]
        push    esi
        push    edi
        cmp     byte ptr [ebx], 0
        jz      L2e49
        mov     edi, dword ptr [ebp+0x14]
        mov     esi, dword ptr [ebp+0x10]
    L2daf:
        xor     ecx, ecx
        cmp     dword ptr [edi], ecx
        jz      L2e49
        mov     dword ptr [g_5e77abdc], ecx
        mov     al, byte ptr [ebx]
        mov     byte ptr [ebp+0xb], al
        lea     eax, [ebx+1]
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp+0x10], eax
    L2dcd:
        mov     eax, dword ptr [ebp+0x10]
        mov     dl, byte ptr [ebp+0xb]
        inc     ecx
        inc     dword ptr [ebp+0x10]
        mov     al, byte ptr [eax]
        cmp     al, dl
        jz      L2dcd
        dec     dword ptr [ebp+0x10]
        mov     dword ptr [ebp+0x8], ecx
        movsx   eax, dl
        cmp     eax, 0x64
        jg      L2f5b
        jz      L2f26
        cmp     eax, 0x27
        jz      L2ed0
        cmp     eax, 0x41
        jz      L2e9a
        cmp     eax, 0x48
        jz      L2e7f
        cmp     eax, 0x4d
        jz      L2e4e
        cmp     eax, 0x61
        jz      L2e9a
    L2e1a:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, dl
        test    byte ptr [ecx+eax*2+1], 0x80
        jz      L2e35
        mov     eax, dword ptr [esi]
        mov     ebx, dword ptr [ebp-0x4]
        mov     byte ptr [eax], dl
        inc     dword ptr [esi]
        dec     dword ptr [edi]
    L2e35:
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax], cl
        inc     dword ptr [esi]
        inc     ebx
        dec     dword ptr [edi]
    L2e40:
        cmp     byte ptr [ebx], 0
        jnz     L2daf
    L2e49:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L2e4e:
        dec     ecx
        jz      L2e6c
        dec     ecx
        jz      L2e76
        dec     ecx
        jz      L2e63
        dec     ecx
        jnz     L2e1a
        mov     byte ptr [ebp+0x14], 0x42
        jmp     L3050
    L2e63:
        mov     byte ptr [ebp+0x14], 0x62
        jmp     L3050
    L2e6c:
        mov     dword ptr [g_5e77abdc], 1
    L2e76:
        mov     byte ptr [ebp+0x14], 0x6d
        jmp     L3050
    L2e7f:
        dec     ecx
        jz      L2e87
        dec     ecx
        jz      L2e91
        jmp     L2e1a
    L2e87:
        mov     dword ptr [g_5e77abdc], 1
    L2e91:
        mov     byte ptr [ebp+0x14], 0x48
        jmp     L3050
    L2e9a:
        push    offset g_5e036e88
        push    ebx
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L2eb0
        add     ebx, 5
        jmp     L2ec4
    L2eb0:
        push    offset g_5e036e84
        push    ebx
        call    FUN_5e033510
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L2ec7
        add     ebx, 3
    L2ec4:
        mov     dword ptr [ebp+0x10], ebx
    L2ec7:
        mov     byte ptr [ebp+0x14], 0x70
        jmp     L3050
    L2ed0:
        test    cl, 1
        jz      L2f1f
        add     ebx, ecx
    L2ed7:
        mov     al, byte ptr [ebx]
        test    al, al
        jz      L2e40
        cmp     dword ptr [edi], 0
        jz      L2e40
        cmp     al, 0x27
        jz      L2f19
        mov     edx, dword ptr [g_5e0391c0]
        movzx   ecx, al
        test    byte ptr [edx+ecx*2+1], 0x80
        jz      L2f0c
        cmp     dword ptr [edi], 1
        jbe     L2f0c
        mov     ecx, dword ptr [esi]
        mov     byte ptr [ecx], al
        inc     dword ptr [esi]
        inc     ebx
        dec     dword ptr [edi]
    L2f0c:
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax], cl
        inc     dword ptr [esi]
        inc     ebx
        dec     dword ptr [edi]
        jmp     L2ed7
    L2f19:
        inc     ebx
        jmp     L2e40
    L2f1f:
        add     ebx, ecx
        jmp     L2e40
    L2f26:
        dec     ecx
        jz      L2f48
        dec     ecx
        jz      L2f52
        dec     ecx
        jz      L2f3f
        dec     ecx
        jnz     L2e1a
        mov     byte ptr [ebp+0x14], 0x41
        jmp     L3050
    L2f3f:
        mov     byte ptr [ebp+0x14], 0x61
        jmp     L3050
    L2f48:
        mov     dword ptr [g_5e77abdc], 1
    L2f52:
        mov     byte ptr [ebp+0x14], 0x64
        jmp     L3050
    L2f5b:
        sub     eax, 0x68
        jz      L3037
        sub     eax, 0x5
        jz      L301c
        sub     eax, 0x6
        jz      L3001
        dec     eax
        jz      L2fa2
        sub     eax, 0x5
        jnz     L2e1a
        mov     eax, ecx
        dec     eax
        dec     eax
        jz      L2f99
        dec     eax
        dec     eax
        jnz     L2e1a
        mov     byte ptr [ebp+0x14], 0x59
        jmp     L3050
    L2f99:
        mov     byte ptr [ebp+0x14], 0x79
        jmp     L3050
    L2fa2:
        mov     eax, dword ptr [ebp+0xc]
        cmp     dword ptr [eax+0x8], 0xb
        mov     eax, dword ptr [ebp+0x18]
        jg      L2fb6
        mov     eax, dword ptr [eax+0x98]
        jmp     L2fbc
    L2fb6:
        mov     eax, dword ptr [eax+0x9c]
    L2fbc:
        test    ecx, ecx
        jle     L2ff9
    L2fc0:
        cmp     dword ptr [edi], 0
        jbe     L2ff9
        mov     cl, byte ptr [eax]
        mov     ebx, dword ptr [g_5e0391c0]
        movzx   edx, cl
        test    byte ptr [ebx+edx*2+1], 0x80
        jz      L2fe5
        cmp     dword ptr [edi], 1
        jbe     L2fe5
        mov     edx, dword ptr [esi]
        mov     byte ptr [edx], cl
        inc     dword ptr [esi]
        inc     eax
        dec     dword ptr [edi]
    L2fe5:
        mov     ecx, dword ptr [esi]
        mov     dl, byte ptr [eax]
        mov     byte ptr [ecx], dl
        inc     dword ptr [esi]
        inc     eax
        dec     dword ptr [edi]
        dec     dword ptr [ebp+0x8]
        cmp     dword ptr [ebp+0x8], 0
        jg      L2fc0
    L2ff9:
        mov     ebx, dword ptr [ebp+0x10]
        jmp     L2e40
    L3001:
        dec     ecx
        jz      L300c
        dec     ecx
        jz      L3016
        jmp     L2e1a
    L300c:
        mov     dword ptr [g_5e77abdc], 1
    L3016:
        mov     byte ptr [ebp+0x14], 0x53
        jmp     L3050
    L301c:
        dec     ecx
        jz      L3027
        dec     ecx
        jz      L3031
        jmp     L2e1a
    L3027:
        mov     dword ptr [g_5e77abdc], 1
    L3031:
        mov     byte ptr [ebp+0x14], 0x4d
        jmp     L3050
    L3037:
        dec     ecx
        jz      L3042
        dec     ecx
        jz      L304c
        jmp     L2e1a
    L3042:
        mov     dword ptr [g_5e77abdc], 1
    L304c:
        mov     byte ptr [ebp+0x14], 0x49
    L3050:
        push    dword ptr [ebp+0x18]
        push    edi
        push    esi
        push    dword ptr [ebp+0xc]
        push    dword ptr [ebp+0x14]
        call    FUN_5e0328c8
        add     esp, 0x14
        jmp     L2ff9
    }
}
