/*
 * FUN_0040bcc0 (147 B) — __fastcall: builds 0x32 linked-list nodes via
 * FUN_0040bbc0, appends each to two lists at +0x14 and +0x1c, then walks
 * both lists and finally invokes each node's vtable method with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00707e90(void);
extern void FUN_004084d0(void);
extern void FUN_0040bbc0(void);
extern void FUN_004179b0(void);

__declspec(naked) void FUN_0040bcc0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_00707e90
        fstp    st(0)
        xor     edi, edi
        lea     ebp, [esi+0x14]
        lea     ebx, [esi+0x1c]
L1:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L2
        push    edi
        mov     ecx, eax
        call    FUN_0040bbc0
        mov     esi, eax
        jmp     L3
L2:
        xor     esi, esi
L3:
        push    esi
        mov     ecx, ebp
        call    FUN_004179b0
        push    esi
        mov     ecx, ebx
        call    FUN_004179b0
        inc     edi
        cmp     edi, 0x32
        jc      L1
        call    FUN_00707e90
        fstp    st(0)
        mov     eax, dword ptr [ebp]
        mov     ecx, dword ptr [ebx]
L4:
        test    eax, eax
        jz      L5
        mov     edx, dword ptr [eax]
        test    edx, edx
        mov     eax, dword ptr [eax+4]
        jnz     L4
L5:
        test    ecx, ecx
        jz      L7
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx+4]
        jnz     L5
L7:
        call    FUN_00707e90
        fstp    st(0)
        mov     esi, dword ptr [ebp]
L8:
        test    esi, esi
        jz      L10
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+4]
        jz      L10
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp     L8
L10:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret
    }
}
