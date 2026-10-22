/*
 * FUN_0056E230 (236 B) — Distance check against AI group members.
 *
 * Takes a group identifier, a position vector, and a distance
 * threshold. Iterates through AI objects in the group and checks
 * if any is within the threshold distance. Returns 1 if found,
 * otherwise 0.
 *
 * __cdecl (3 params: uint groupId, float* position, float threshold).
 * Returns bool (AL = 0 or 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) char __cdecl FUN_0056E230(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    edi
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 1]
        push    ecx
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], 0
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 8], 0
        call    FUN_00580580
        mov     eax, dword ptr [ebp + 8]
        push    0
        lea     edx, [ebp - 0x14]
        push    edx
        push    eax
        call    FUN_00566ef0
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x10]
        add     esp, 0xc
        cmp     edx, eax
        jz      label_free_and_return0

        fild    dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp + 0x10]

label_loop:
        mov     eax, dword ptr [edx]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edi, dword ptr [eax + 0x9c]
        fsubr   dword ptr [ecx]
        add     eax, 0x80
        fld     dword ptr [ecx + 4]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x1c], edi
        fsub    dword ptr [ebp - 0x1c]
        fld     dword ptr [ecx + 8]
        mov     dword ptr [ebp - 0x18], eax
        fsub    dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        fcomp   dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 1
        jnz     label_found
        mov     eax, dword ptr [ebp - 0x10]
        add     edx, 4
        cmp     edx, eax
        jnz     label_loop
        mov     edx, dword ptr [ebp - 0x14]

label_free_and_return0:
        test    edx, edx
        jz      label_return0
        push    edx
        call    FUN_004084e0
        add     esp, 4

label_return0:
        xor     al, al
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret

label_found:
        mov     eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jz      label_return1
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_return1:
        mov     al, 1
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
