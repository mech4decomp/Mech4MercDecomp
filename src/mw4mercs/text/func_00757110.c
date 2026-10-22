/*
 * FUN_00757110 (173 B) — Game logic over a list of objects.
 *
 * __fastcall (ECX = param), RET (no stack cleanup).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856a88;                /* DAT_00856a88 */
extern int *g_856a8c;               /* DAT_00856a8c (array of object ptrs) */
extern int *g_856b8c;               /* DAT_00856b8c */
extern char g_87dd0a;               /* DAT_0087dd0a */
extern void __cdecl FUN_00758540(int);
extern void FUN_00755cc0(void);

__declspec(naked) void __fastcall FUN_00757110(void *param)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_856a88]
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebx, ebx
        xor     cl, cl
        cmp     ebp, ebx
        jle     L_7147
        mov     edx, offset g_856a8c
        mov     esi, ebp
L_712b:
        mov     eax, dword ptr [edx]
        test    byte ptr [eax + 0x68], 0x20
        jz      L_713d
        cmp     byte ptr [eax + 0x75], bl
        jz      L_713d
        mov     cl, 0x1
        mov     byte ptr [eax + 0x75], bl
L_713d:
        add     edx, 0x4
        dec     esi
        jnz     L_712b
        cmp     cl, bl
        jnz     L_7154
L_7147:
        mov     eax, dword ptr [g_856b8c]
        cmp     byte ptr [eax + 0xe8], bl
        jz      L_717b
L_7154:
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00758540
        mov     edx, dword ptr [g_856b8c]
        mov     ebp, dword ptr [g_856a88]
        mov     byte ptr [g_87dd0a], bl
        mov     byte ptr [edx + 0xe8], bl
L_717b:
        xor     edi, edi
        cmp     ebp, ebx
        jle     L_71b8
        mov     esi, offset g_856a8c
L_7186:
        mov     ecx, dword ptr [esi]
        cmp     byte ptr [ecx + 0x98], bl
        jz      L_71b0
        mov     eax, dword ptr [ecx + 0x9c]
        cmp     eax, 0x1
        mov     byte ptr [ecx + 0x98], bl
        jz      L_71a5
        cmp     eax, ebx
        jnz     L_71b0
L_71a5:
        call    FUN_00755cc0
        mov     ebp, dword ptr [g_856a88]
L_71b0:
        inc     edi
        add     esi, 0x4
        cmp     edi, ebp
        jl      L_7186
L_71b8:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
