/*
 * FUN_0060f130 (433 B) — __thiscall (ECX = this), RET 8.
 *
 * Initializes a HUD/UI subsystem: reads a param struct, walks two linked
 * lists calling FUN_0060cf30 / FUN_0060ceb0, allocates and configures a
 * global object (DAT_007da848), and copies fields into globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7f27e0;
extern int g_7f26a4;
extern int g_7b95a4;
extern int g_7da848;
extern char g_7b5514;
extern int g_7f2260;
extern int g_7f2264;
extern void *__stdcall FUN_00416a50(void *a);
extern void __stdcall FUN_0040f060(void *a);
extern void __stdcall FUN_0040d9b0(void *a);
extern void __stdcall FUN_004c3d50(int a);
extern char __stdcall FUN_00415230(int a);
extern void __stdcall FUN_0060cf30(void *a);
extern void __stdcall FUN_006f4950(int a);
extern void *__stdcall FUN_004084d0(int a);
extern void __stdcall FUN_00490660(void *a);
extern void *__stdcall FUN_0048f210(void *a, int b);
extern void __stdcall FUN_006f49a0(void);
extern void __stdcall FUN_0060ceb0(void *a);
extern void __stdcall FUN_0048fba0(void *a);

__declspec(naked) void __stdcall FUN_0060f130(void)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [ebp + 0x4]
        test    esi, esi
        jz      L_f2d7
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        xor     eax, edx
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [ecx]
        push    ebx
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x94]
        push    edi
        push    edx
        add     ecx, 0x10
        call    FUN_00416a50
        add     eax, 0x1c
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040f060
        mov     ecx, dword ptr [esp + 0x14]
        mov     bl, byte ptr [ecx]
        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [g_7f27e0]
        push    0x0
        mov     byte ptr [esi + 0x274], bl
        call    FUN_004c3d50
        lea     ebx, [esi + 0xbc]
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_f1d0
    L_f1a7:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      L_f1d0
        mov     eax, dword ptr [g_7f26a4]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        __emit 0x74 /* __emit: backward JZ rel8 off-by-4 (call-reloc between branch & target) */
        __emit 0xE1
        push    edi
        mov     ecx, ebp
        call    FUN_0060cf30
        __emit 0xEB /* __emit: backward JMP rel8 off-by-4 (call-reloc between branch & target) */
        __emit 0xD7
    L_f1d0:
        mov     edx, dword ptr [g_7b95a4]
        push    edx
        call    FUN_006f4950
        mov     ecx, dword ptr [g_7da848]
        test    ecx, ecx
        jz      L_f1ec
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_f1ec:
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_f20b
        mov     ecx, esi
        call    FUN_00490660
        mov     dword ptr [esi], 0x773bc4
        jmp     L_f20d
    L_f20b:
        xor     esi, esi
    L_f20d:
        push    0x1003c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_f22f
        push    0x3
        push    esi
        mov     ecx, eax
        call    FUN_0048f210
        mov     dword ptr [g_7da848], eax
        jmp     L_f239
    L_f22f:
        mov     dword ptr [g_7da848], 0x0
    L_f239:
        call    FUN_006f49a0
        mov     ecx, dword ptr [g_7f27e0]
        mov     edx, dword ptr [ecx + 0x26c]
        mov     eax, dword ptr [edx + 0x110]
        mov     ecx, dword ptr [g_7da848]
        mov     edi, dword ptr [ebx]
        mov     dword ptr [eax + 0xc], ecx
        mov     eax, dword ptr [ebp + 0x4]
        mov     dl, byte ptr [eax + 0x274]
        mov     ecx, dword ptr [eax + 0x278]
        mov     byte ptr [g_7b5514], dl
        mov     edx, dword ptr [eax + 0x27c]
        mov     dword ptr [g_7f2260], ecx
        mov     dword ptr [g_7f2264], edx
        test    edi, edi
        jz      L_f2ab
    L_f282:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L_f2ab
        mov     eax, dword ptr [g_7f26a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        __emit 0x74 /* __emit: backward JZ rel8 off-by-4 (call-reloc between branch & target) */
        __emit 0xE1
        push    esi
        mov     ecx, ebp
        call    FUN_0060ceb0
        __emit 0xEB /* __emit: backward JMP rel8 off-by-4 (call-reloc between branch & target) */
        __emit 0xD7
    L_f2ab:
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [eax + 0xd8]
        push    ecx
        mov     ecx, dword ptr [g_7f27e0]
        call    FUN_004c3d50
        mov     ecx, dword ptr [g_7da848]
        call    FUN_0048fba0
        pop     edi
        pop     ebx
        pop     esi
        mov     eax, 0x1
        pop     ebp
        ret     8
    L_f2d7:
        pop     esi
        mov     eax, 0x1
        pop     ebp
        ret     8
    }
}
