/*
 * FUN_00699F30 (480 B) — __stdcall, 4 params (ret 0x10).
 *
 * String/object update routine: builds a string via FUN_005cb1c0 /
 * FUN_00563480, performs lookups through the 0x69a6c0/0x69a130/
 * 0x69a760/0x699ee0/0x69a1d0/0x69a120/0x69a140 family, updates a
 * double at [eax+0x1c] and increments a counter at [eax+0x24].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_0069a6c0(void);
extern void __cdecl FUN_0069a130(void);
extern void __cdecl FUN_0069a760(void);
extern void __cdecl FUN_00699ee0(void);
extern void __cdecl FUN_0069a1d0(void);
extern void __cdecl FUN_0069a120(void);
extern void __cdecl FUN_0069a140(void);
extern void __cdecl FUN_00637dd0(void);
extern void __cdecl FUN_005ddbe0(void);
extern void __cdecl FUN_0069a170(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_0069a5f0(void);

__declspec(naked) int __stdcall FUN_00699F30(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_005cb1c0
        mov     ecx, dword ptr [esp + 0x54]
        mov     esi, dword ptr [esp + 0x54]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        push    ecx
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_00563480
        mov     ebx, dword ptr [esp + 0x58]
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, ebx
        call    FUN_0069a6c0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x54], ecx
        push    edx
        mov     ecx, ebx
        call    FUN_0069a130
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x54]
        cmp     eax, dword ptr [ecx]
        je      L_699fac
        add     eax, 0x10
        push    eax
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0069a760
        add     esp, 8
        test    al, al
        je      L_699fed
L_699fac:
        lea     ecx, [esp + 0x24]
        call    FUN_00699ee0
        push    eax
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0069a1d0
        push    eax
        push    ecx
        lea     edx, [esp + 0x5c]
        mov     ecx, esp
        push    edx
        call    FUN_0069a120
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, ebx
        call    FUN_0069a140
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x54], ecx
        lea     ecx, [esp + 0x30]
        call    FUN_00637dd0
L_699fed:
        mov     eax, dword ptr [esp + 0x54]
        fld     qword ptr [esp + 0x4c]
        fadd    qword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x18]
        fstp    qword ptr [eax + 0x1c]
        call    FUN_005ddbe0
        lea     edx, [esp + 0x54]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005cb1c0
        mov     eax, dword ptr [esp + 0x54]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        push    ecx
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_00563480
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        mov     ecx, ebx
        call    FUN_0069a170
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x5c], eax
        call    FUN_0069a130
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x58]
        cmp     eax, dword ptr [edx]
        je      L_69a072
        add     eax, 0x10
        push    eax
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_0069a760
        add     esp, 8
        test    al, al
        je      L_69a0b3
L_69a072:
        lea     ecx, [esp + 0x24]
        call    FUN_00699ee0
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0069a1d0
        push    eax
        push    ecx
        lea     edx, [esp + 0x60]
        mov     ecx, esp
        push    edx
        call    FUN_0069a120
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, ebx
        call    FUN_0069a140
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x58], ecx
        lea     ecx, [esp + 0x30]
        call    FUN_00637dd0
L_69a0b3:
        mov     eax, dword ptr [esp + 0x58]
        inc     dword ptr [eax + 0x24]
        lea     ecx, [esp + 0x18]
        call    FUN_005ddbe0
        lea     edx, [esp + 0x54]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        push    ecx
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_005480c0
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, ebx
        call    FUN_0069a5f0
        lea     ecx, [esp + 0x18]
        call    FUN_005ddbe0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret     0x10
    }
}
