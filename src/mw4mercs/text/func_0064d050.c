/*
 * FUN_0064d050 (282 B) — GameOS/archive-related lookup helper.
 *
 * Reads a mode flag (0x008058ac), conditionally calls FUN_00649150,
 * then loops calling FUN_0064c950 / FUN_0064ced0 / FUN_006498f0
 * comparing against several global pointers (0x0080d9b0/b4/bc) and
 * calling FUN_00562f40(0x10) on mismatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;    /* 0x008058ac */
extern int g_80d9bc;    /* 0x0080d9bc */
extern int g_80d9b4;    /* 0x0080d9b4 */
extern int g_80d9b0;    /* 0x0080d9b0 */

extern void __cdecl FUN_00649150(void);
extern void *__cdecl FUN_0064ced0(void);
extern void *__cdecl FUN_0064c950(void *p);
extern void __cdecl FUN_00562f40(int);
extern char __cdecl FUN_006498f0(char *p);

__declspec(naked) void *FUN_0064d050(void)
{
    __asm {
        mov     eax, dword ptr [g_8058ac]
        push    ebx
        xor     bl, bl
        cmp     eax, 0x9
        push    esi
        jz      L063
        cmp     eax, 0x8
        jnz     L06A
L063:
        mov     bl, 0x1
        call    FUN_00649150
L06A:
        call    FUN_0064ced0
        test    bl, bl
        mov     esi, eax
        jz      L09A
        push    esi
        call    FUN_0064c950
        mov     ecx, dword ptr [g_80d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L09A
        cmp     esi, dword ptr [g_80d9b4]
        jz      L09A
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L09A:
        push    0x7b5a64
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L165
        push    edi
L0B0:
        mov     edi, dword ptr [g_8058ac]
        push    esi
        call    FUN_0064c950
        mov     esi, eax
        call    FUN_00649150
        call    FUN_0064ced0
        push    eax
        call    FUN_0064c950
        add     esp, 0x8
        cmp     edi, 0x8
        jl      L14A
        cmp     edi, 0x9
        jle     L102
        cmp     edi, 0x33
        jnz     L14A
        mov     ecx, dword ptr [g_80d9b0]
        cmp     esi, ecx
        jnz     L0EE
        cmp     eax, ecx
        jz      L0FE
L0EE:
        push    0x10
        call    FUN_00562f40
        mov     ecx, dword ptr [g_80d9b0]
        add     esp, 0x4
L0FE:
        mov     esi, ecx
        jmp     L14A
L102:
        mov     ecx, dword ptr [g_80d9bc]
        cmp     esi, ecx
        jnz     L114
        cmp     eax, ecx
        jnz     L114
        mov     esi, ecx
        jmp     L14A
L114:
        mov     edx, dword ptr [g_80d9b4]
        cmp     esi, edx
        jnz     L12A
        cmp     eax, edx
        jz      L137
        cmp     eax, ecx
        jnz     L13B
        mov     esi, edx
        jmp     L14A
L12A:
        cmp     eax, edx
        jnz     L13B
        cmp     esi, ecx
        setz    al
        test    al, al
        jz      L13B
L137:
        mov     esi, edx
        jmp     L14A
L13B:
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
        mov     esi, 0x80da38
L14A:
        push    0x7b5a64
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L0B0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
L165:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
