/*
 * FUN_0060D8D0 (125 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * If this+4 is nonzero: calls FUN_00416b60(param2), FUN_005b6f10(*param1),
 * then on success invokes virtual methods [*obj+0xa4], [*entry+0x104],
 * FUN_0060d4b0, and [*obj]. Finally calls FUN_0060fcf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(int v);
extern int __cdecl FUN_005b6f10(int v);
extern void __cdecl FUN_0060d4b0(int v);
extern void __cdecl FUN_0060fcf0(void);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __stdcall FUN_0060d8d0(int *param1, int param2)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        test    edi, edi
        jz      l_925
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [edi + 0x384]
        call    FUN_00416b60
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        push    edx
        mov     ecx, eax
        call    FUN_005b6f10
        mov     esi, eax
        test    esi, esi
        jz      l_925
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xa4]
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x104]
        push    esi
        mov     ecx, ebx
        call    FUN_0060d4b0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
    l_925:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xf4
        call    FUN_0060fcf0
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
