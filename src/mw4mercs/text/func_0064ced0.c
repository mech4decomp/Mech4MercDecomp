/*
 * FUN_0064ced0 (302 B) — string/object resolution loop. Reads a global
 *   state (0x008058ac), resolves two handles via FUN_0064c950, and
 *   dispatches through a jump table (0x64d000 + byte index 0x64d014)
 *   to pick a canonical handle; loops while FUN_006498f0("...") is true.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058ac;
extern int g_0080d9bc;
extern int g_0080d9b4;
extern int g_0080d9b0;
extern char g_64d014[];
extern int g_64d000[];

extern void *__cdecl FUN_0064cb90(void);
extern char __cdecl FUN_006498f0(const char *);
extern int __cdecl FUN_0064c950(void *);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_00562f40(int);

__declspec(naked) void FUN_0064ced0(void)
{
    __asm {
        push    esi
        call    FUN_0064cb90
        push    0x7b5a74
        mov     esi, eax
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      Lcffa
        push    edi
    Lceee:
        mov     edi, dword ptr [g_008058ac]
        push    esi
        call    FUN_0064c950
        mov     esi, eax
        call    FUN_00649150
        call    FUN_0064cb90
        push    eax
        call    FUN_0064c950
        lea     ecx, [edi - 0x5]
        add     esp, 0x8
        cmp     ecx, 0x2c
        ja      Lcfe0
        xor     edx, edx
        mov     dl, byte ptr [g_64d014 + ecx]
        jmp     dword ptr [g_64d000 + edx*4]
    Lcf2a:
        mov     ecx, dword ptr [g_0080d9bc]
        cmp     esi, ecx
        jnz     Lcf3c
        cmp     eax, ecx
        jz      Lcfde
    Lcf3c:
        mov     edx, dword ptr [g_0080d9b4]
        cmp     esi, edx
        jz      Lcf72
        cmp     eax, edx
        jnz     Lcf8f
        cmp     esi, ecx
        setz    al
        test    al, al
        jz      Lcf8f
        mov     esi, edx
        jmp     Lcfe0
    Lcf5a:
        mov     ecx, dword ptr [g_0080d9bc]
        cmp     esi, ecx
        jnz     Lcf68
        cmp     eax, ecx
        jz      Lcfde
    Lcf68:
        mov     edx, dword ptr [g_0080d9b4]
        cmp     esi, edx
        jnz     Lcf7e
    Lcf72:
        cmp     eax, edx
        jz      Lcf8b
        cmp     eax, ecx
        jnz     Lcf8f
        mov     esi, edx
        jmp     Lcfe0
    Lcf7e:
        cmp     eax, edx
        jnz     Lcf8f
        cmp     esi, ecx
        setz    al
        test    al, al
        jz      Lcf8f
    Lcf8b:
        mov     esi, edx
        jmp     Lcfe0
    Lcf8f:
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
        mov     esi, 0x80da38
        jmp     Lcfe0
    Lcfa0:
        mov     ecx, dword ptr [g_0080d9bc]
        cmp     esi, ecx
        jnz     Lcfae
        cmp     eax, ecx
        jz      Lcfde
    Lcfae:
        push    0x10
        call    FUN_00562f40
        mov     ecx, dword ptr [g_0080d9bc]
        add     esp, 0x4
        jmp     Lcfde
    Lcfc0:
        mov     ecx, dword ptr [g_0080d9b0]
        cmp     esi, ecx
        jnz     Lcfce
        cmp     eax, ecx
        jz      Lcfde
    Lcfce:
        push    0x10
        call    FUN_00562f40
        mov     ecx, dword ptr [g_0080d9b0]
        add     esp, 0x4
    Lcfde:
        mov     esi, ecx
    Lcfe0:
        push    0x7b5a74
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     Lceee
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    Lcffa:
        mov     eax, esi
        pop     esi
        ret
    }
}
