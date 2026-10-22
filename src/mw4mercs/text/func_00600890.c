/*
 * FUN_00600890 (156 B) — __thiscall (ECX=this), RET 4.
 *
 * Iterates this+0x22dc slots; for empty slots (this+0x22cc[i]==0)
 * creates an object via FUN_0048fac0, copies a float from
 * this+0x22d4[i], stores it, and calls FUN_00422360. Manages a
 * refcount byte at object+0x10-1 and frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7da848;
extern int __stdcall FUN_0048fac0(int a, int b);
extern void __cdecl FUN_00422360(int a);
extern void __cdecl FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_00600890(int param_1)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x22dc]
        push    esi
        xor     esi, esi
        test    eax, eax
        jle     L_600927
        push    ebp
        mov     ebp, dword ptr [ebx + 0x22cc]
        push    edi
    L_6008ac:
        mov     ecx, dword ptr [ebp + esi*0x4]
        test    ecx, ecx
        jnz     L_600910
        mov     eax, dword ptr [ebx + 0x22c4]
        mov     ecx, dword ptr [eax + esi*0x4]
        mov     edi, dword ptr [ecx + 0x10]
        test    edi, edi
        jz      L_6008c7
        inc     byte ptr [edi - 0x1]
    L_6008c7:
        mov     ecx, dword ptr [g_7da848]
        push    0x0
        push    edi
        call    FUN_0048fac0
        test    eax, eax
        jz      L_6008f5
        mov     edx, dword ptr [ebx + 0x22d4]
        mov     ecx, dword ptr [esp + 0x14]
        fld     dword ptr [edx + esi*0x4]
        push    ecx
        fstp    dword ptr [eax + 0x38]
        mov     ecx, eax
        mov     dword ptr [ebp + esi*0x4], eax
        call    FUN_00422360
    L_6008f5:
        test    edi, edi
        jz      L_60091a
        mov     cl, byte ptr [edi - 0x1]
        lea     eax, [edi - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_60091a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_60091a
    L_600910:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        call    FUN_00422360
    L_60091a:
        mov     eax, dword ptr [ebx + 0x22dc]
        inc     esi
        cmp     esi, eax
        jl      L_6008ac
        pop     edi
        pop     ebp
    L_600927:
        pop     esi
        pop     ebx
        ret     4
    }
}
