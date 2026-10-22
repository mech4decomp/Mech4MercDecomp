/*
 * FUN_005e0b50 (116 B) — __thiscall (ECX=this, RET 4) handler: formats a
 * "Flag_Taken" string, stores a float, and conditionally dispatches.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e1200(int a, void *b);
extern void *__stdcall FUN_00563550(void *a, int b);
extern void __stdcall FUN_00563c80(void *a);
extern float __stdcall FUN_00707e70(int a);
extern void __stdcall FUN_005df4f0(void *a);
extern int __stdcall FUN_005df620(void *a);
extern void __stdcall FUN_005dffe0(void *a, void *b, void *c);
extern void __stdcall FUN_005e1a60(void *a);

__declspec(naked) void __stdcall FUN_005e0b50(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        lea     ebx, [edi + 0x14]
        push    ebx
        mov     esi, ecx
        push    0x24
        call    FUN_005e1200
        xor     eax, eax
        mov     al, byte ptr [ebx]
        push    eax
        push    0x7888bc
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x488]
        push    edi
        mov     ecx, esi
        call    FUN_005df4f0
        mov     ecx, esi
        call    FUN_005df620
        test    eax, eax
        jz      L_bbe
        mov     ecx, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [edi + 0x4cc]
        mov     eax, dword ptr [esi + 0x44c]
        push    ecx
        push    edx
        push    eax
        call    FUN_005dffe0
        add     esp, 0xc
        push    edi
        mov     ecx, esi
        call    FUN_005e1a60
L_bbe:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
