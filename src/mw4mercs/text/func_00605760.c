/*
 * FUN_00605760 (192 B) — __thiscall (ECX=this, RET 0xc) that builds a
 * zero-initialized array via FUN_0041fd80 / FUN_00416110, then calls
 * FUN_00605a10 / FUN_00605820, restoring a global (0x007b220c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_27a8;   /* 0x007f27a8 (object pointer) */
extern unsigned long g_220c;   /* 0x007b220c */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00605a10(void);
extern void __cdecl FUN_00605820(void);
extern void __cdecl FUN_00416130(void);

__declspec(naked) void FUN_00605760(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        jnz     l_75
        mov     eax, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x18], eax
    l_75:
        mov     ebx, dword ptr [esp + 0x1c]
        test    ebx, ebx
        jnz     l_80
        mov     ebx, dword ptr [edi + 0x10]
    l_80:
        lea     esi, [edi + 0x18]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_19
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_27a8]
        mov     ebp, eax
        call    FUN_00416110
        test    eax, eax
        jz      l_c6
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        test    edx, edx
        mov     dword ptr [eax], edx
        jle     l_c2
    l_b6:
        mov     byte ptr [eax + ecx*1 + 0x4], 0x0
        mov     edx, dword ptr [eax]
        inc     ecx
        cmp     ecx, edx
        jl      l_b6
    l_c2:
        mov     esi, eax
        jmp     l_c8
    l_c6:
        xor     esi, esi
    l_c8:
        mov     ecx, dword ptr [g_220c]
        push    esi
        mov     dword ptr [esp + 0x20], ecx
        push    ebp
        mov     ecx, edi
        mov     dword ptr [g_220c], 0x3f000000
        call    FUN_00605a10
        mov     edx, dword ptr [esp + 0x18]
        push    ebx
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_00605820
        test    esi, esi
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [g_220c], eax
        jz      l_0c
        mov     ecx, dword ptr [g_27a8]
        push    esi
        call    FUN_00416130
    l_0c:
        test    ebp, ebp
        jz      l_19
        mov     edx, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [edx]
    l_19:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
