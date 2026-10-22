/*
 * FUN_005dd050 (180 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Compares a stored object (this+0x170) against a looked-up object by
 * calling virtual method +0x60 on each; if equal and virtual +0xC8
 * returns 1, calls virtual +0xFC with the looked-up object and returns.
 * Otherwise stores a timestamp (FUN_00707e70(0)) and the param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004fcb30(int param);
extern float __cdecl FUN_00707e70(int param);

/* extern data symbols for absolute-memory ops */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __stdcall FUN_005dd050(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0x170]
        test    ebx, ebx
        jz      L_5dd070
        mov     eax, dword ptr [ebx + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L_5dd0fd
L_5dd070:
        mov     ebp, dword ptr [esp + 0x14]
        cmp     ebp, -0x1
        jz      L_5dd0fd
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_5dd0fd
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        and     dl, 0x1
        cmp     dl, 0x1
        jz      L_5dd0fd
        cmp     esi, ebx
        jz      L_5dd0fd
        test    ebx, ebx
        jz      L_5dd0ea
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x60]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     ebx, eax
        call    dword ptr [edx + 0x60]
        cmp     eax, ebx
        jnz     L_5dd0ea
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0xc8]
        cmp     al, 0x1
        jnz     L_5dd0ea
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0xfc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L_5dd0ea:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x1d8]
        mov     dword ptr [edi + 0x1d4], ebp
L_5dd0fd:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
