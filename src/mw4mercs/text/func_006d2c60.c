/*
 * FUN_006d2c60 (304 B) — __thiscall (ECX = this), RET 0x10 (4 params).
 *
 * Object constructor: validates via FUN_00416f60, allocates a 0x38-byte
 * object via FUN_004084d0, initializes it (vtable 0x79ea18), runs a
 * switch on param_4 via a jump table at 0x6d2d90, fills fields, and
 * registers via FUN_00416f20. Returns the result of FUN_00412ab0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c10;
extern void __cdecl FUN_004128e0(void);
extern void *__cdecl FUN_00412ab0(void *a);
extern int __cdecl FUN_00416f60(void *a);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004d05d0(int a);
extern void __cdecl FUN_00412740(void *a);
extern int __cdecl FUN_006d2c10(int a);
extern void __cdecl FUN_00416f20(void *a, void *b);
extern void __cdecl FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_006d2c60(void)
{
    __asm {
        push    ecx
        push    edi
        mov     edi, ecx
        lea     ecx, [esp + 0xc]
        call    FUN_004128e0
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_00412ab0
        add     esp, 4
        lea     edx, [esp + 4]
        lea     ecx, [edi + 4]
        push    edx
        mov     dword ptr [esp + 8], eax
        call    FUN_00416f60
        test    eax, eax
        jnz     L_2d6e
        push    ebx
        push    ebp
        push    esi
        push    0x38
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     esi, ebx
        jz      L_2cc9
        mov     eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_004d05d0
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi], 0x79ea18
        jmp     L_2ccb
L_2cc9:
        xor     esi, esi
L_2ccb:
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esi + 0x34]
        call    FUN_00412740
        mov     edx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        and     edx, 0xfffffff8
        or      edx, eax
        dec     eax
        cmp     eax, 4
        mov     dword ptr [esi + 0x24], edx
        mov     ebx, 1
        ja      L_2d05
        jmp     dword ptr [eax*4 + 0x6d2d90]
        mov     dword ptr [esi + 0x20], 2
        jmp     L_2d05
        mov     dword ptr [esi + 0x20], ebx
L_2d05:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x20]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ebp
        call    FUN_006d2c10
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esi + 0x18], eax
        call    FUN_006d2c10
        mov     dword ptr [esi + 0x1c], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        lea     ecx, [edi + 4]
        call    FUN_00416f20
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     byte ptr [edi + 0x5c], bl
        call    FUN_00412ab0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 4
        test    eax, eax
        jz      L_2d64
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_2d64
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_2d64:
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     edi
        pop     ecx
        ret     0x10
L_2d6e:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_2d89
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_2d89
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_2d89:
        xor     eax, eax
        pop     edi
        pop     ecx
        ret     0x10
    }
}
