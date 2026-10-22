/*
 * FUN_005b1330 (146 B) — __thiscall (ECX = this), RET 0x8 (2 stack args).
 * If this+0x5cc set: FUN_005b1f00() then FUN_005b1f60(3 dwords from
 * this+0x5d0/0x5d4/0x5d8), clear flag.  If this+0x5cd set: FUN_005b1fd0()
 * then FUN_005b2030(same 3 dwords), clear flag.  Finally FUN_005b4aa0(p1,p2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl   FUN_005b1f00(void);
extern void __stdcall FUN_005b1f60(int, int, int);
extern void __cdecl   FUN_005b1fd0(void);
extern void __stdcall FUN_005b2030(int, int, int);
extern void __fastcall FUN_005b4aa0(int, int);

__declspec(naked) void __fastcall FUN_005b1330(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, [esi+0x5cc]
        test    al, al
        jz      l_skip1
        call    FUN_005b1f00
        mov     ecx, [esi+0x5d0]
        mov     edx, [esi+0x5d4]
        sub     esp, 0xc
        mov     eax, esp
        mov     [eax], ecx
        mov     ecx, [esi+0x5d8]
        mov     [eax+8], ecx
        mov     ecx, esi
        mov     [eax+4], edx
        call    FUN_005b1f60
        mov     byte ptr [esi+0x5cc], 0
    l_skip1:
        mov     al, [esi+0x5cd]
        test    al, al
        jz      l_skip2
        mov     ecx, esi
        call    FUN_005b1fd0
        mov     edx, [esi+0x5d0]
        mov     ecx, [esi+0x5d4]
        sub     esp, 0xc
        mov     eax, esp
        mov     [eax], edx
        mov     edx, [esi+0x5d8]
        mov     [eax+4], ecx
        mov     ecx, esi
        mov     [eax+8], edx
        call    FUN_005b2030
        mov     byte ptr [esi+0x5cd], 0
    l_skip2:
        mov     eax, [esp+0xc]
        mov     ecx, [esp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005b4aa0
        pop     esi
        ret     0x8
    }
}
