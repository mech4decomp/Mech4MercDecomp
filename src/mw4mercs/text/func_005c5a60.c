/*
 * FUN_005c5a60 (260 B) — __thiscall, RET 4. Copies a 0x30-byte block,
 * stores a tagged pointer, and dispatches a virtual method.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005c59b0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005cbe30(void);
extern void __cdecl FUN_005cb6c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d1180(void);
extern void __cdecl FUN_005c60d0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_005c5a60(void *param)
{
    

extern int DAT_007f25c0;
__asm {
        mov eax, dword ptr [DAT_007f25c0]
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0x170]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_5b5f
        test    esi, esi
        jz      L_5b5f
        mov     al, byte ptr [ebx + 0x548]
        test    al, al
        jnz     L_5aa1
        mov     ecx, ebx
        call    FUN_005c59b0
        cmp     al, 0x1
        jz      L_5b5f
L_5aa1:
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebp]
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebp + 0x8]
        push    0x30
        mov     dword ptr [ebx + 0x4f0], eax
        mov     dword ptr [ebx + 0x4f4], ecx
        mov     dword ptr [ebx + 0x4f8], edx
        mov     byte ptr [ebx + 0x548], 0x0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5af5
        mov     ecx, dword ptr [ebx + 0x170]
        mov     esi, dword ptr [ecx + 0xd8]
        push    edi
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        pop     edi
        jmp     L_5af7
L_5af5:
        xor     eax, eax
L_5af7:
        mov     esi, dword ptr [ebx + 0x59c]
        or      eax, 0x1
        push    0x0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [ebx + 0x59c], eax
        call    FUN_005cbe30
        lea     ecx, [esp + 0x10]
        call    FUN_005cb6c0
        mov     edx, esi
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_5b39
        mov     eax, esi
        and     esi, 0xfffffffc
        push    esi
        and     eax, 0x2
        call    FUN_004084e0
        add     esp, 0x4
L_5b39:
        push    0x0
        mov     ecx, ebx
        call    FUN_005d1180
        mov     esi, dword ptr [ebx]
        push    0x0
        push    0x1
        mov     ecx, ebx
        call    FUN_005c60d0
        call    FUN_0075db4a
        push    eax
        push    ebp
        mov     ecx, ebx
        call    dword ptr [esi + 0x1bc]
        pop     ebp
L_5b5f:
        pop     esi
        pop     ebx
        ret     4
    }


}
