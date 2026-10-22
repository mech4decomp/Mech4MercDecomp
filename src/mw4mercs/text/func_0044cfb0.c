/*
 * FUN_0044cfb0 (148 B) — MLR mesh constructor (__thiscall, RET 0xC, 3 args).
 * Calls FUN_00450a00, sets vtable 0x76e974, asserts on arg range, then
 * initializes a vertex/index buffer via virtual calls on the arg object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00450a00(void);
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0044cfb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0x8]
        push    ebx
        mov     ebx, dword ptr [ebp+0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00450a00
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi+0x70], eax
        mov     dword ptr [esi+0x74], eax
        mov     dword ptr [esi], 0x76e974
        jle     L_cffb
        cmp     ebx, 0x2
        jg      L_cffb
        push    0x76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_d044
        int     3
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_cffb:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi+0x74]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_d028
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0x70], eax
        lea     eax, [ebx+ebx*0x2]
        shl     eax, 0x2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        jmp     L_d02f
L_d028:
        mov     dword ptr [esi+0x70], 0x0
L_d02f:
        mov     ecx, dword ptr [esi+0x74]
        mov     eax, 0x100
        cmp     ecx, eax
        jbe     L_d044
        mov     ecx, dword ptr [esi+0x70]
        mov     dword ptr [esi+0x70], ecx
        mov     dword ptr [esi+0x74], eax
L_d044:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
