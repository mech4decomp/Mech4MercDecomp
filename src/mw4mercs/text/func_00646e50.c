/*
 * FUN_00646E50 (732 B) — __thiscall (this in ECX = ebp), returns void.
 * Vector/transform helper: walks a list via FUN_00641000/641050/5619f0,
 * does FPU math on a 3D vector (fld/fsub/fmul/fstp), and dispatches a
 * render/update call through FUN_00640FA0 / FUN_0055F5B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561DF0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561A30(void);
extern void __cdecl FUN_005619F0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_0040C5D0(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_0055F5B0(void);
extern void __cdecl FUN_00640FA0(void);

extern float g_76d070;
extern float g_7926f4;
extern float g_7926f0;
extern float g_76d978;
extern float g_76d5f0;
extern float g_77016c;

__declspec(naked) void func_00646E50(void)
{
    __asm {
        sub     esp, 0x5c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        lea     esi, [ebp + 0x38]
        push    ecx
        xor     ebx, ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x40], 0
        mov     dword ptr [esp + 0x3c], 0
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00561DF0
        mov     edx, dword ptr [eax]
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ecx]
        je      L_6ea8
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_6edf
L_6ea8:
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561A30
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    FUN_005619F0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
L_6edf:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     edx, [esp + 0x14]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea     eax, [esp + 0x28]
        push    eax
        fstp    dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, esi
        fstp    dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x4c], 0
        mov     dword ptr [esp + 0x1c], 1
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x10], eax
        je      L_6f38
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_6f6f
L_6f38:
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561A30
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_005619F0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
L_6f6f:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [esp + 0x54]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [esp + 0x64]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x60], 0
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x5c]
        call    FUN_0040C5D0
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_0040C410
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [g_76d070]
        mov     edi, dword ptr [ebp + 0x34]
        mov     eax, dword ptr [ebp + 0x50]
        shl     eax, 0x18
        and     edi, 0xffffff
        fsubr   dword ptr [g_7926f4]
        or      edi, eax
        mov     al, byte ptr [ebp + 0x68]
        cmp     al, bl
        fstp    dword ptr [esp + 0x30]
        je      L_70e3
        cmp     byte ptr [ebp + 0x69], bl
        je      L_70b4
        fld     dword ptr [g_7926f0]
        lea     ecx, [esp + 0x14]
        fsub    dword ptr [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        fsub    dword ptr [esp + 0x54]
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebx
        fsub    dword ptr [g_76d978]
        fstp    dword ptr [esp + 0x3c]
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [edx]
        je      L_703b
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_7072
L_703b:
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561A30
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_005619F0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
L_7072:
        push    ebx
        push    ebx
        push    edi
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [esp + 0x40]
        push    edx
        call    FUN_0055F5B0
        fld     dword ptr [esp + 0x4c]
        fadd    dword ptr [esp + 0x34]
        push    ebx
        push    ebx
        push    edi
        fadd    dword ptr [g_76d5f0]
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x40]
        fstp    dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x28], 1
        push    ecx
        lea     edx, [esp + 0x2c]
        jmp     L_7115
L_70b4:
        cmp     al, bl
        je      L_70e3
        fld     dword ptr [g_7926f0]
        push    ebx
        fsub    dword ptr [esp + 0x44]
        push    ebx
        push    edi
        lea     eax, [esp + 0x48]
        fsub    dword ptr [g_77016c]
        push    eax
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x28], ebx
        fstp    dword ptr [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x2c]
        jmp     L_7115
L_70e3:
        cmp     byte ptr [ebp + 0x69], bl
        je      L_7124
        fld     dword ptr [g_7926f0]
        push    ebx
        fsub    dword ptr [esp + 0x50]
        push    ebx
        push    edi
        lea     eax, [esp + 0x54]
        fsub    dword ptr [g_77016c]
        push    eax
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x28], 1
        fstp    dword ptr [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x2c]
L_7115:
        push    edx
        mov     ecx, esi
        call    FUN_00640FA0
        mov     ecx, dword ptr [eax]
        call    FUN_0055F5B0
L_7124:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x5c
        ret
    }
}
