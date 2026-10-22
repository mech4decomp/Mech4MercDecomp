/*
 * FUN_0067c550 (195 B) — __thiscall (RET 4). Initializes a large structure
 * with many indexed fields, calls FUN_00707e70 twice and FUN_0067c0f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float __stdcall FUN_00707e70(int);
extern void __cdecl FUN_0067c0f0(void);
extern int g_7b8d78;
extern int g_7b8d7c;
extern int g_7b8d80;

__declspec(naked) void __fastcall FUN_0067c550(void* this, int a)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, ecx
        xor     ebx, ebx
        mov     byte ptr [esi + edi + 0xff4], bl
        mov     dword ptr [edi + esi*4 + 0x10f4], ebx
        push    0x1
        mov     dword ptr [edi + esi*4 + 0x14f0], ebx
        call    FUN_00707e70
        fstp    dword ptr [edi + esi*4 + 0x18ec]
        push    0x1
        call    FUN_00707e70
        fstp    dword ptr [edi + esi*4 + 0x1ce8]
        mov     ecx, dword ptr [g_7b8d78]
        mov     edx, dword ptr [g_7b8d7c]
        lea     eax, [esi + esi*2]
        mov     dword ptr [edi + eax*4 + 0x20e4], ecx
        mov     ecx, dword ptr [g_7b8d80]
        mov     dword ptr [edi + eax*4 + 0x20e8], edx
        mov     dword ptr [edi + eax*4 + 0x20ec], ecx
        lea     eax, [edi + eax*4 + 0x20e4]
        mov     byte ptr [esi + edi + 0x2cd8], bl
        mov     byte ptr [esi + edi + 0x36d4], 0x1
        mov     dword ptr [edi + esi*8 + 0x4], ebx
        mov     dword ptr [edi + esi*8 + 0x8], ebx
        mov     dword ptr [edi + esi*8 + 0x7fc], ebx
        mov     dword ptr [edi + esi*8 + 0x800], 0x412e8480
        lea     edx, [esi + esi*2]
        mov     byte ptr [esi + edi + 0x2dd7], bl
        lea     eax, [esi + edx*4]
        mov     dword ptr [edi + esi*4 + 0x2ed8], ebx
        lea     ecx, [edi + eax*4 + 0x37d4]
        mov     dword ptr [edi + esi*4 + 0x32d8], ebx
        call    FUN_0067c0f0
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
