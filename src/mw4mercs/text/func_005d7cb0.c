/*
 * FUN_005d7cb0 (493 B) — Serialize a graph object to a stream. Reads a
 * global pointer, then walks blocks/nodes/links and writes them via the
 * stream's virtual method at vtable+0x24, using a config object (EDI) to
 * look up section names.
 *
 * __cdecl, one stack param, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d7cb0(void)
{
    

extern int DAT_007f243c;
extern void __cdecl FUN_10040ec90(void);
extern void __cdecl FUN_100411c68(void);
extern int DAT_0076b420;
extern void __cdecl FUN_100411ee5(void);
extern void __cdecl FUN_100411bf3(void);
extern void __cdecl FUN_1005d6773(void);
extern void __cdecl FUN_100411bb0(void);
extern void __cdecl FUN_0068e960(void);
extern void __cdecl FUN_100411aa5(void);
extern void __cdecl FUN_00657a2a(void);
extern void __cdecl FUN_100411a7b(void);
extern void __cdecl FUN_00657f60(void);
extern void __cdecl FUN_100411a53(void);
extern void __cdecl FUN_0068cfe8(void);
extern void __cdecl FUN_100411b97(void);
__asm {
sub     esp, 0x40
        mov eax, dword ptr [DAT_007f243c]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esi]
        push    edi
        push    0x4
        lea     eax, [esp + 0x28]
        mov     dword ptr [esp + 0x28], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [esp + 0x58]
        xor     ebx, ebx
        push    0x788280
        mov     ecx, ebp
        mov     dword ptr [esp + 0x58], ebx
        call FUN_10040ec90
        mov     edi, eax
        cmp     edi, ebx
        jz      L7D02
        push    ebx
        lea     ecx, [esp + 0x58]
        push    ecx
        push    0x788274
        mov     ecx, edi
        call FUN_100411c68
L7D02:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        jle     L7D60
        mov ebp, dword ptr [DAT_0076b420]
L7D1E:
        push    ebx
        lea     ecx, [esp + 0x38]
        push    0x78826c
        push    ecx
        call    ebp
        add     esp, 0xc
        test    edi, edi
        jz      L7D45
        push    0x1
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, edi
        call FUN_100411ee5
L7D45:
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x54]
        inc     ebx
        cmp     ebx, eax
        jl      L7D1E
        mov     ebp, dword ptr [esp + 0x58]
L7D60:
        test    edi, edi
        jz      L7D77
        push    0x1
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x788260
        mov     ecx, edi
        call FUN_100411bf3
L7D77:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        xor     ebx, ebx
        test    eax, eax
        jle     L7DA3
L7D8F:
        push    ebp
        push    esi
        push    ebx
        call FUN_1005d6773
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0xc
        inc     ebx
        cmp     ebx, eax
        jl      L7D8F
L7DA3:
        test    edi, edi
        jz      L7DBA
        push    0x1
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0x788254
        mov     ecx, edi
        call FUN_100411bb0
L7DBA:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     L7DE6
L7DD2:
        push    ebp
        push    esi
        push    ebx
        call FUN_0068e960
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0xc
        inc     ebx
        cmp     ebx, eax
        jl      L7DD2
L7DE6:
        test    edi, edi
        mov     dword ptr [esp + 0x18], 0x0
        jz      L7E05
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x788248
        mov     ecx, edi
        call FUN_100411aa5
L7E05:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    esi
        call FUN_00657a2a
        xor     ebx, ebx
        add     esp, 0x8
        cmp     edi, ebx
        mov     dword ptr [esp + 0x1c], ebx
        jz      L7E2F
        push    ebx
        lea     eax, [esp + 0x20]
        push    eax
        push    0x78823c
        mov     ecx, edi
        call FUN_100411a7b
L7E2F:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    esi
        call FUN_00657f60
        add     esp, 0x8
        cmp     edi, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L7E57
        push    ebx
        lea     edx, [esp + 0x24]
        push    edx
        push    0x788230
        mov     ecx, edi
        call FUN_100411a53
L7E57:
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        push    esi
        call FUN_0068cfe8
        add     esp, 0x8
        cmp     edi, ebx
        jz      L7E95
        push    ebx
        lea     ecx, [esp + 0x5c]
        push    ecx
        push    0x78821c
        mov     ecx, edi
        mov     dword ptr [esp + 0x64], 0x3f800000
        call FUN_100411b97
        test    al, al
        jz      L7E95
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
L7E95:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
    }


}
