/*
 * FUN_005dd330 (689 B) — __thiscall, RET 4 (one stack param).
 *
 * ABL state debug/log dump. Reads several fields off `this` (EBX):
 *   [this+0x2f2] byte  active flag
 *   [this+0x30a] byte  deactive flag
 *   [this+0x2e4] -> +0x38 -> +0x10  state name ptr
 *   [this+0x1bc] float  (mood)
 *   [this+0x1b8] float  (mood)
 * and emits a formatted log via FUN_005ddac0 / FUN_005cbd00 /
 * FUN_005dddb0 / FUN_005dda40 / FUN_005cbf80.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_005ddac0(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_00691d60(void);
extern void __cdecl FUN_005dddb0(void);
extern void __cdecl FUN_005ddbe0(void);
extern void __cdecl FUN_005dda40(void);
extern void __cdecl FUN_005cb3d0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005ddd60(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void __cdecl func_005dd330(void)
{
    

extern int DAT_0076b420;
__asm {
sub     esp, 0x38
        push    ebx
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x2f2]
        test    al, al
        jnz     L355
        mov     ecx, dword ptr [esp + 0x40]
        push    0x788554
        call    FUN_005ddac0
        pop     ebx
        add     esp, 0x38
        ret     4
L355:
        cmp     byte ptr [ebx + 0x30a], 0x1
        push    esi
        mov     esi, dword ptr [esp + 0x44]
        push    edi
        jnz     L370
        push    0x788548
        mov     ecx, esi
        call    FUN_005ddac0
L370:
        push    0x78853c
        mov     ecx, esi
        call    FUN_005ddac0
        mov     eax, dword ptr [ebx + 0x2e4]
        test    eax, eax
        jz      L399
        mov     eax, dword ptr [eax + 0x38]
        test    eax, eax
        jz      L399
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jz      L399
        mov     eax, ecx
        push    eax
        jmp     L39E
L399:
        push    0x788538
L39E:
        mov     ecx, esi
        call    FUN_005ddac0
        mov     ecx, dword ptr [esp + 0x48]
        push    ebp
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x788530
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x788530
        push    ecx
        push    0x788530
        mov     ecx, esi
        call    FUN_005cbd00
        fld     dword ptr [ebx + 0x1bc]
        call    FUN_0075db4a
        push    eax
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_00691d60
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x8
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x14]
        push    edx
        call    dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005dddb0
        lea     ecx, [esp + 0x14]
        call    FUN_005ddbe0
        mov     ecx, dword ptr [esp + 0x4c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x78852c
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x78852c
        push    ecx
        push    0x78852c
        mov     ecx, esi
        call    FUN_005cbd00
        mov ebp, dword ptr [DAT_0076b420]
        fld     dword ptr [ebx + 0x1bc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        lea     edx, [esp + 0x28]
        push    0x788524
        push    edx
        call    ebp
        add     esp, 0x10
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_005dda40
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005dddb0
        lea     ecx, [esp + 0x14]
        call    FUN_005cb3d0
        mov     edx, dword ptr [esp + 0x4c]
        push    edx
        mov     edi, 0x788520
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x788520
        push    ecx
        push    0x788520
        mov     ecx, esi
        call    FUN_005cbd00
        sub     esp, 0x8
        fld     dword ptr [ebx + 0x1b8]
        fstp    qword ptr [esp]
        lea     eax, [esp + 0x28]
        push    0x788524
        push    eax
        call    ebp
        add     esp, 0x10
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005dda40
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005dddb0
        lea     ecx, [esp + 0x14]
        call    FUN_005cb3d0
        mov     eax, dword ptr [esp + 0x4c]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x78851c
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x78851c
        push    ecx
        push    0x78851c
        mov     ecx, esi
        call    FUN_005cbd00
        add     ebx, 0x1c8
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        pop     ebp
        jz      L5A8
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x788510
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x788510
        push    ecx
        push    0x788510
        mov     ecx, esi
        call    FUN_005cbd00
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     edx, dword ptr [eax + 0x2c]
        mov     eax, dword ptr [esp + 0x48]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005cbf80
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a078
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x77a078
        push    ecx
        push    0x77a078
        jmp     L5C8
L5A8:
        mov     edx, dword ptr [esp + 0x48]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x788504
        repne   scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, 0x788504
        push    ecx
        push    0x788504
L5C8:
        mov     ecx, esi
        call    FUN_005cbf80
        lea     ecx, [esp + 0xc]
        call    FUN_005ddd60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x38
        ret     4
    }


}
