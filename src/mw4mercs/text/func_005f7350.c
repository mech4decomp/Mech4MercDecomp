/*
 * FUN_005f7350 (82 B) — __thiscall (ECX = this).
 *
 * Sets flags on a sub-object, calls two virtual methods, then calls
 * FUN_004d67e0 / FUN_004db240 and a virtual method with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d67e0(void *param);
extern void __stdcall FUN_004db240(void);

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void __stdcall FUN_005f7350(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0xD8]
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi]
        or      ecx, 0xC0
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004d67e0
        mov     ecx, edi
        call    FUN_004db240
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx + 0x48]
        pop     edi
        pop     esi
        ret
    }
}
