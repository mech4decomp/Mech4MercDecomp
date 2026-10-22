/*
 * FUN_006194b0 (599 B) - __thiscall animation/motion + pilot-save subsystem
 * routine. Iterates a motion list (this->0x1c) `param_1` times, dispatching
 * per-flag virtual-ish calls (FUN_0059cf80/.../FUN_0059d9f0), then walks a
 * linked list (this->0x38->0x10) clearing active entries, and finally (if
 * param_3) performs a guarded teardown via FUN_00615ff0 + a refcount free.
 * Returns 1 via RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0059cf80(void);
extern void __cdecl FUN_0059d6e0(void);
extern void __cdecl FUN_0059cfa0(void);
extern void __cdecl FUN_0059d8e0(void);
extern void __cdecl FUN_0059cf90(void);
extern void __cdecl FUN_0059d7e0(void);
extern void __cdecl FUN_0059cfb0(void);
extern void __cdecl FUN_0059d9f0(void);
extern void __cdecl FUN_0059d0c0(void);
extern void __cdecl FUN_0059d400(void);
extern void __cdecl FUN_00597c30(void);
extern void __cdecl FUN_0059b9f0(void);
extern void __cdecl FUN_0059eb70(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00615ff0(void);
extern void __cdecl FUN_004084e0(void);

extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_006194b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        sub     esp, 0x14
        push    ebx
        push    ebp
        xor     ebx, ebx
        cmp     eax, ebx
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [ebp+0x1c]
        jle     L_619692
        push    edi
        mov     dword ptr [esp+0x28], eax
L_6194CE:
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, eax
        and     ecx, 0x1f
        cmp     cl, 0x1f
        jz      L_61953E
        and     eax, 0x2
        cmp     al, 0x2
        jz      L_6194F1
        mov     ecx, esi
        call    FUN_0059cf80
        push    eax
        mov     ecx, esi
        call    FUN_0059d6e0
L_6194F1:
        mov     edx, dword ptr [esi+0x10]
        and     edx, 0x8
        cmp     dl, 0x8
        jz      L_61950B
        mov     ecx, esi
        call    FUN_0059cfa0
        push    eax
        mov     ecx, esi
        call    FUN_0059d8e0
L_61950B:
        mov     eax, dword ptr [esi+0x10]
        and     eax, 0x4
        cmp     al, 0x4
        jz      L_619524
        mov     ecx, esi
        call    FUN_0059cf90
        push    eax
        mov     ecx, esi
        call    FUN_0059d7e0
L_619524:
        mov     ecx, dword ptr [esi+0x10]
        and     ecx, 0x10
        cmp     cl, 0x10
        jz      L_61953E
        mov     ecx, esi
        call    FUN_0059cfb0
        push    eax
        mov     ecx, esi
        call    FUN_0059d9f0
L_61953E:
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [esi+0x28]
        and     eax, 0xffffffe0
        mov     edx, eax
        inc     ecx
        and     edx, 0x1f
        cmp     dl, 0x1f
        mov     dword ptr [esi+0x28], ecx
        mov     dword ptr [esi+0x10], eax
        jz      L_6195BB
        and     eax, 0x2
        cmp     al, 0x2
        jz      L_61956E
        mov     ecx, esi
        call    FUN_0059cf80
        push    eax
        mov     ecx, esi
        call    FUN_0059d6e0
L_61956E:
        mov     eax, dword ptr [esi+0x10]
        and     eax, 0x8
        cmp     al, 0x8
        jz      L_619587
        mov     ecx, esi
        call    FUN_0059cfa0
        push    eax
        mov     ecx, esi
        call    FUN_0059d8e0
L_619587:
        mov     ecx, dword ptr [esi+0x10]
        and     ecx, 0x4
        cmp     cl, 0x4
        jz      L_6195A1
        mov     ecx, esi
        call    FUN_0059cf90
        push    eax
        mov     ecx, esi
        call    FUN_0059d7e0
L_6195A1:
        mov     edx, dword ptr [esi+0x10]
        and     edx, 0x10
        cmp     dl, 0x10
        jz      L_6195BB
        mov     ecx, esi
        call    FUN_0059cfb0
        push    eax
        mov     ecx, esi
        call    FUN_0059d9f0
L_6195BB:
        cmp     byte ptr [esp+0x2c], 0x1
        jnz     L_6195D0
        mov     edi, dword ptr [ebp+0x24]
        push    ebx
        mov     ecx, esi
        call    FUN_0059d0c0
        sub     dword ptr [edi+0x1c], eax
L_6195D0:
        mov     ecx, esi
        call    FUN_0059d400
        mov     ecx, dword ptr [ebp+0x34]
        call    FUN_00597c30
        mov     ecx, dword ptr [ebp+0x20]
        call    FUN_0059b9f0
        mov     ecx, dword ptr [ebp+0x2c]
        call    FUN_0059eb70
        lea     eax, [ebp+0x54]
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00416bc0
        lea     ecx, [esp+0x10]
        mov     dword ptr [esp+0x10], 0x779f0c
        call    FUN_00416cc0
        cmp     eax, ebx
        jz      L_61964B
L_619611:
        cmp     dword ptr [eax+0x28], ebx
        jnz     L_61963B
        mov     edx, dword ptr [eax+0x2c]
        mov     ecx, 0x1
        cmp     edx, ecx
        jnz     L_61963E
        cmp     dword ptr [eax+0x20], ecx
        jnz     L_619630
        mov     dword ptr [eax+0x20], ebx
        mov     dword ptr [eax+0x2c], ebx
        mov     dword ptr [eax+0x30], ebx
L_619630:
        cmp     dword ptr [eax+0x20], 0x3
        jnz     L_61963E
        mov     dword ptr [eax+0x20], ecx
        jmp     L_61963E
L_61963B:
        mov     dword ptr [eax+0x28], ebx
L_61963E:
        lea     ecx, [esp+0x10]
        call    FUN_00416cc0
        cmp     eax, ebx
        jnz     L_619611
L_61964B:
        mov     eax, dword ptr [ebp+0x38]
        mov     edx, dword ptr [eax+0x10]
        add     eax, 0x10
        cmp     edx, ebx
        jz      L_61967E
L_619654:
        mov     eax, dword ptr [edx]
        cmp     eax, ebx
        mov     edx, dword ptr [edx+0x4]
        jz      L_61967E
        mov     ecx, dword ptr [eax+0x6c]
        cmp     ecx, 0x1
        jz      L_61966E
        cmp     ecx, 0x2
        __emit 0x75        /* __emit: backward JNZ rel8 to 0x619654; MSVC6 rel8 off-by-4 (call-reloc between branch and target) */
        __emit 0xE6
L_61966E:
        cmp     byte ptr [eax+0x24], bl
        __emit 0x74        /* __emit: backward JZ rel8 to 0x619654; MSVC6 rel8 off-by-4 */
        __emit 0xE1
        cmp     dword ptr [eax+0x20], 0x1
        __emit 0x75        /* __emit: backward JNZ rel8 to 0x619654; MSVC6 rel8 off-by-4 */
        __emit 0xDB
        mov     dword ptr [eax+0x20], ebx
        __emit 0xEB        /* __emit: backward JMP rel8 to 0x619654; MSVC6 rel8 off-by-4 */
        __emit 0xD6
L_61967E:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        dec     dword ptr [esp+0x28]
        jnz     L_6194CE
        pop     edi
L_619692:
        cmp     byte ptr [esp+0x2c], bl
        jz      L_6196F9
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx+0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xd560
        call    dword ptr [edx+0x34]
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_00412570
        cmp     byte ptr [ebp+0x70], bl
        push    ebx
        jz      L_6196D1
        mov     eax, dword ptr [esp+0x2c]
        push    0x1
        push    eax
        jmp     L_6196D7
L_6196D1:
        mov     ecx, dword ptr [esp+0x2c]
        push    ebx
        push    ecx
L_6196D7:
        mov     ecx, ebp
        call    FUN_00615ff0
        mov     eax, dword ptr [esp+0x28]
        cmp     eax, ebx
        jz      L_6196F9
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6196F9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6196F9:
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
