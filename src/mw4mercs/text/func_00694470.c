/*
 * FUN_00694470 (387 B) — __thiscall (ECX=this), RET 4 (one stack param).
 *
 * Looks up a type name string ("integer"/"string"/"real") and constructs
 * the corresponding object, appending it to a list stored at this+0x4C.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_006942d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00694840(void);
extern void __cdecl FUN_00694950(void);
extern void __cdecl FUN_006948c0(void);
extern void __cdecl FUN_00694970(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00547c60(void);

__declspec(naked) void __stdcall FUN_00694470(void *param)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ecx
        push    0x779d50
        mov     ecx, ebx
        call    FUN_00411a10
        mov     esi, eax
        xor     edi, edi
        cmp     esi, edi
        jz      L_6945e9
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00547ba0
        push    0x8
        lea     ecx, [esp + 0x20]
        call    FUN_005634e0
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        mov     byte ptr [edx], 0x0
        call    FUN_006942d0
        mov     edx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x18], edi
        xor     eax, eax
        add     esp, 0x8
        mov     edi, 0x794914
        repne   scasb
        not     ecx
        dec     ecx
        sub     edx, ebp
        cmp     edx, ecx
        jnz     L_69451c
        mov     edi, 0x794914
        mov     esi, ebp
        xor     eax, eax
        repe    cmpsb
        jnz     L_69451c
        push    0x3c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_69458c
        push    ebx
        mov     ecx, eax
        call    FUN_00694840
        jmp     L_69458e
L_69451c:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x799468
        repne   scasb
        not     ecx
        dec     ecx
        cmp     edx, ecx
        jnz     L_694554
        mov     edi, 0x799468
        mov     esi, ebp
        xor     eax, eax
        repe    cmpsb
        jnz     L_694554
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_69458c
        push    ebx
        mov     ecx, eax
        call    FUN_00694950
        jmp     L_69458e
L_694554:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x794904
        repne   scasb
        not     ecx
        dec     ecx
        cmp     edx, ecx
        jnz     L_6945d9
        mov     edi, 0x794904
        mov     esi, ebp
        xor     edx, edx
        repe    cmpsb
        jnz     L_6945d9
        push    0x3c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_69458c
        push    ebx
        mov     ecx, eax
        call    FUN_006948c0
        jmp     L_69458e
L_69458c:
        xor     eax, eax
L_69458e:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + 0x50]
        mov     esi, dword ptr [ecx + 0x54]
        add     ecx, 0x4c
        cmp     edx, esi
        mov     dword ptr [esp + 0x10], eax
        jz      L_6945b1
        test    edx, edx
        jz      L_6945a9
        mov     dword ptr [edx], eax
L_6945a9:
        add     edx, 0x4
        mov     dword ptr [ecx + 0x4], edx
        jmp     L_6945be
L_6945b1:
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        push    edx
        call    FUN_00694970
L_6945be:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_6945e9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x4
L_6945d9:
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, ebp
        push    ecx
        push    ebp
        call    FUN_00547c60
        add     esp, 0x8
L_6945e9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x4
    }
}
