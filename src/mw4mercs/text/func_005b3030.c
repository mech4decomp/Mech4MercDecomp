/*
 * FUN_005b3030 (125 B) — __thiscall (ECX=this), RET 8 (2 stack params).
 * Collision/plane logic: compares this's transform against another
 * object's, calls a virtual method, and asserts via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006fab90(void);

__declspec(naked) void FUN_005b3030(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x8]
        test    edx, edx
        jz      L307E
        mov     eax, dword ptr [ecx + 0x6a4]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x9c]
        mov     edx, dword ptr [edx + 0x34]
        add     eax, 0x80
        mov     eax, dword ptr [edx + 0x6a4]
        mov     eax, dword ptr [eax + 0xd8]
        fcomp   dword ptr [eax + 0x9c]
        add     eax, 0x80
        fnstsw ax
        test    ah, 0x41
        jnz     L30AD
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1e0]
        pop     ebp
        ret     8
L307E:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L309B
        push    0x78632c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L30AD
        int     3
        pop     ebp
        ret     8
L309B:
        push    0x7862f8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L30AD
        int     3
L30AD:
        pop     ebp
        ret     8
    }


}
