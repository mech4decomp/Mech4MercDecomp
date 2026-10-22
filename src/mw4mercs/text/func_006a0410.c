/*
 * FUN_006A0410 (208 B) — __thiscall (ECX=this, RET 4). Walks a linked list
 * rooted at this->field4, comparing a double at node+0x14 against a value
 * from FUN_00707e70. Iterates nodes via FUN_005621b0, then processes a
 * collection via FUN_0064e100 / FUN_0064dda0, dispatches through a vtable
 * (call [edx+0xd0]), and recurses into itself.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f268c;   /* 0x007f268c */

extern void __cdecl FUN_00707e70(int);
extern void __cdecl FUN_005621b0(void*);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064dda0(int);
extern void __cdecl FUN_00415230(int);
extern void __cdecl FUN_006a0510(void);

__declspec(naked) void FUN_006a0410(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, esi
        push    edi
        mov     dword ptr [esp + 0x10], eax
        jz      l_d8
    l_29:
        push    0x0
        lea     edi, [eax + 0x14]
        call    FUN_00707e70
        fcomp   qword ptr [edi]
        fnstsw  ax
        test    ah, 0x41
        jz      l_59
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_005621b0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        cmp     eax, esi
        jnz     l_29
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    l_59:
        mov     ebx, dword ptr [esp + 0x18]
        mov     ecx, ebx
        call    FUN_0064e100
        mov     edi, dword ptr [eax]
        mov     ecx, ebx
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 0x4]
        jz      l_bf
    l_72:
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     ecx, ebx
        call    FUN_0064dda0
        mov     esi, eax
        test    esi, esi
        jz      l_b0
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_b0
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        jz      l_b0
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    eax
        call    dword ptr [edx + 0xd0]
    l_b0:
        mov     ecx, ebx
        add     edi, 0x4
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 0x4]
        jnz     l_72
    l_bf:
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, esp
        mov     dword ptr [eax], ecx
        lea     ecx, [ebp + 0x4]
        call    FUN_006a0510
        push    ebx
        mov     ecx, ebp
        call    FUN_006a0410
    l_d8:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
