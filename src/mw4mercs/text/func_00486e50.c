/*
 * FUN_00486e50 (206 B) - MLR effect constructor (__thiscall, RET 0x8).
 * Allocates/copies a byte buffer, zero-fills it, and initializes the
 * effect object's vtable pointer and matrix data.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004870d0(void);
extern void __cdecl FUN_004870f0(void);

__declspec(naked) void FUN_00486e50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     esi, dword ptr [esp + 0x14]
        xor     ebp, ebp
        mov     eax, ebp
        cmp     esi, eax
        mov     dword ptr [ebx + 0x18], ebp
        mov     dword ptr [ebx + 0x1c], ebp
        mov     dword ptr [ebx], 0x76fc38
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], esi
        jz      L_486ed3
        cmp     esi, ebp
        jbe     L_486ec1
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x18]
        add     esp, 0x4
        test    edi, edi
        mov     ebp, eax
        jz      L_486eba
        mov     eax, dword ptr [ebx + 0x1c]
        cmp     esi, eax
        jnc     L_486e9d
        mov     eax, esi
L_486e9d:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_486eb1
L_486ea4:
        mov     dl, byte ptr [edi + eax*0x1]
        mov     ecx, eax
        mov     byte ptr [eax + ebp*0x1], dl
        dec     eax
        test    ecx, ecx
        jnz     L_486ea4
L_486eb1:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_486eba:
        mov     dword ptr [ebx + 0x18], ebp
        xor     ebp, ebp
        jmp     L_486ed0
L_486ec1:
        mov     edx, dword ptr [ebx + 0x18]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x18], ebp
L_486ed0:
        mov     dword ptr [ebx + 0x1c], esi
L_486ed3:
        cmp     esi, ebp
        jle     L_486eec
        mov     edi, dword ptr [ebx + 0x18]
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
L_486eec:
        mov     ecx, ebx
        call    FUN_004870d0
        mov     ecx, ebx
        call    FUN_004870f0
        lea     edi, [ebx + 0x24]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x94], ebp
        mov     dword ptr [ebx + 0x98], ebp
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x8
    }
}
