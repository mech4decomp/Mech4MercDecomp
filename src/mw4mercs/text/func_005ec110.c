/*
 * FUN_005ec110 (134 B) — __thiscall constructor with 4 stack params.
 *
 * Calls FUN_005eeda0(p1,p2,p3,p4) on this, initializes a sub-object
 * at this+0x220 via FUN_0041fc80, sets up vtables (this -> 0x789bac,
 * sub-object -> 0x789c78), then calls FUN_005ec1c0(p3).
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005eeda0(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_0041fc80(void *p);
extern void __stdcall FUN_005ec1c0(void *p);

__declspec(naked) void __stdcall FUN_005ec110(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005eeda0
        xor     eax, eax
        lea     edi, [esi + 0x220]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x1e0], eax
        mov     dword ptr [esi + 0x1e4], eax
        mov     dword ptr [esi + 0x1e8], eax
        mov     dword ptr [esi + 0x1f0], eax
        mov     dword ptr [esi + 0x1f4], 0x2000
        call    FUN_0041fc80
        lea     ecx, [esi + 0x214]
        lea     eax, [esi + 0x1f8]
        mov     dword ptr [esi + 0x1e4], ecx
        mov     dword ptr [edi], 0x789c78
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], 0x789bac
        mov     dword ptr [esi + 0x1e0], eax
        call    FUN_005ec1c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
