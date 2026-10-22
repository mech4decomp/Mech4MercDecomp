/*
 * FUN_00733a70 (410 B) — Video codec open/load helper.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 * Loads a video codec, converts the filename to wide chars, and
 * registers the resulting stream. Uses the assert/error-log helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc4d0(void *param);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00740d10(void);
extern void __cdecl FUN_0075b170(void);
extern void __cdecl FUN_0075b1d0(void);
extern void __cdecl FUN_0075b230(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00740dc0(void);
extern void __cdecl FUN_0075b550(void);
extern void __cdecl FUN_00740d60(void);

extern int  g_896c88;
extern int  g_856b8c;
extern char g_8aadbc;
extern char g_87dd0a;
extern void *g_76b130;   /* IAT: MultiByteToWideChar */

__declspec(naked) void FUN_00733a70(void *param_1, void *param_2, int *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x210
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        xor     ebx, ebx
        push    esi
        mov     edi, ecx
        mov     dword ptr [eax], ebx
        mov     dword ptr [ebp - 4], ebx
        call    FUN_006fc4d0
        test    al, al
        jnz     L_ab5
        mov     ecx, dword ptr [g_896c88]
        push    esi
        push    0x274d
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L_ab5
        int     3
L_ab5:
        lea     edx, [ebp - 4]
        push    edx
        push    0x7afb20
        push    1
        push    ebx
        push    0x7afba0
        call    FUN_00740d10
        cmp     dword ptr [ebp - 4], ebx
        jnz     L_aee
        mov     eax, dword ptr [g_896c88]
        push    0x271f
        push    eax
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_aee
        int     3
L_aee:
        mov     ecx, dword ptr [ebp - 4]
        push    ebx
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0075b170
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp - 4]
        push    ebx
        push    ebx
        push    0x7afc40
        push    edx
        push    eax
        call    FUN_0075b1d0
        cmp     dword ptr [g_856b8c], ebx
        jz      L_b30
        cmp     byte ptr [g_8aadbc], bl
        jnz     L_b30
        mov     ecx, dword ptr [ebp - 4]
        push    ebx
        push    1
        push    0x7afc50
        push    ebx
        push    ecx
        call    FUN_0075b1d0
L_b30:
        push    0x104
        lea     edx, [ebp - 0x210]
        push    edx
        push    -1
        push    esi
        push    ebx
        push    ebx
        call    dword ptr [g_76b130]
        mov     ecx, dword ptr [ebp - 4]
        push    ebx
        lea     eax, [ebp - 0x210]
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_0075b230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_b96
        mov     edx, dword ptr [ebp - 4]
        push    edx
        call    FUN_00740db0
        mov     eax, dword ptr [ebp + 0x10]
        push    esi
        push    0x7a60ac
        mov     dword ptr [eax], ebx
        mov     dword ptr [edi + 0xc], ebx
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_c0a
        int     3
        /* inline epilogue (dead path after INT3) */
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_b96:
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, dword ptr [ebp + 0x10]
        push    eax
        mov     dword ptr [ecx], eax
        call    FUN_00740dc0
        mov     eax, dword ptr [ebp - 4]
        lea     edx, [ebp - 8]
        push    edx
        push    eax
        call    FUN_0075b550
        mov     edx, dword ptr [ebp - 8]
        lea     ecx, [ebp + 8]
        push    ecx
        push    0x7a3350
        push    edx
        mov     dword ptr [ebp + 8], ebx
        call    FUN_00740d60
        cmp     dword ptr [g_856b8c], ebx
        lea     eax, [edi + 0xc]
        mov     dword ptr [eax], ebx
        jz      L_bef
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    0x7a3390
        push    eax
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00740d60
        mov     byte ptr [g_87dd0a], bl
L_bef:
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        call    FUN_00740db0
        mov     edx, dword ptr [ebp - 8]
        push    edx
        call    FUN_00740db0
        mov     eax, dword ptr [ebp - 4]
        push    eax
        call    FUN_00740db0
L_c0a:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
