/*
 * FUN_1002ce10 (401 B) — __stdcall, RET 0x8.
 * SEH-guarded object-registration handler: allocates a 0x3C-byte object,
 * walks a hash-list, and registers entries.
 *
 * CFLAGS: /O1
 */

extern void * __cdecl FUN_10001d50(unsigned int);
extern void __cdecl FUN_100063b0(void);
extern void __cdecl FUN_1002cfb0(void);
extern void __cdecl FUN_1001bef0(void);
extern void * __cdecl FUN_10006ad0(int a, int b);
extern void __cdecl FUN_10005d70(void);
extern void __cdecl FUN_1002e240(int a, int b, int c);

__declspec(naked) void __stdcall FUN_1002ce10(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x100487fe
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        xor     ebx, ebx
        xor     ecx, ecx
        xor     eax, eax
        cmp     edi, ebx
        jz      L_1002cf87
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], esi
        cmp     esi, ebx
        mov     dword ptr [esp + 0x24], ebx
        jz      L_1002ce85
        push    0x10
        push    0x8
        push    ebx
        push    0x10004b20
        push    0x10004b10
        mov     ecx, esi
        call    FUN_100063b0
        mov     dword ptr [esi + 0x2c], 0x10004b10
        mov     dword ptr [esi + 0x30], 0x10004b20
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esp + 0xc], esi
        jmp     L_1002ce8b
    L_1002ce85:
        mov     dword ptr [esp + 0xc], ebx
        mov     esi, ebx
    L_1002ce8b:
        cmp     esi, ebx
        mov     dword ptr [esp + 0x24], 0xffffffff
        mov     dword ptr [esp + 0x14], esi
        jnz     L_1002ceb4
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret     0x8
    L_1002ceb4:
        mov     edx, dword ptr [edi + 0x28]
        inc     edx
        xor     eax, eax
        cmp     word ptr [edi], bx
        mov     dword ptr [edi + 0x28], edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_1002cf7a
        push    ebp
        nop
        __emit 0x8D   /* __emit: MSVC6 drops the 00 disp byte for lea esp,[esp] (8D 64 24 00) */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_1002ced0:
        mov     edx, dword ptr [edi + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     ebp, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     ebp, ebx
        jz      L_1002cf69
    L_1002cee8:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        js      L_1002cf5e
        mov     edi, dword ptr [ebp + 0x8]
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], esi
        test    esi, esi
        mov     dword ptr [esp + 0x28], 0x1
        jz      L_1002cf2a
        mov     ecx, esi
        call    FUN_1002cfb0
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp + 0x2c], 0x2
        call    FUN_1001bef0
        mov     eax, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x34], eax
        jmp     L_1002cf2c
    L_1002cf2a:
        xor     esi, esi
    L_1002cf2c:
        mov     edi, dword ptr [edi + 0x34]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        mov     dword ptr [esp + 0x30], 0xffffffff
        call    FUN_10006ad0
        test    eax, eax
        jz      L_1002cf4f
        push    0x1
        mov     ecx, eax
        call    FUN_10005d70
    L_1002cf4f:
        mov     eax, dword ptr [esi + 0x34]
        push    esi
        push    eax
        push    edi
        call    FUN_1002e240
        mov     edi, dword ptr [esp + 0x34]
    L_1002cf5e:
        mov     ebp, dword ptr [ebp]
        cmp     ebp, ebx
        jnz     L_1002cee8
        mov     eax, dword ptr [esp + 0x14]
    L_1002cf69:
        inc     eax
        cmp     ax, word ptr [edi]
        mov     dword ptr [esp + 0x14], eax
        jc      L_1002ced0
        xor     ebx, ebx
        pop     ebp
    L_1002cf7a:
        mov     eax, dword ptr [edi + 0x28]
        mov     ecx, dword ptr [esp + 0x14]
        dec     eax
        mov     dword ptr [edi + 0x28], eax
        xor     eax, eax
    L_1002cf87:
        mov     edx, dword ptr [esp + 0x2c]
        pop     edi
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x18]
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret     0x8
    }
}
