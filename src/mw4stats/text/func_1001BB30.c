/* FUN_1001bb30 - __stdcall, 818 bytes (3 args, RET 0xc)
 * Log/stream serialization dispatcher. Initializes a 0x94-byte buffer,
 * branches on a mode field, frees/reinitializes a stats object (ESI) and
 * appends wide strings via FUN_10001680 / FUN_100016b0, and formats via
 * IAT 0x10021138 (swprintf-style). */

extern void *g_1002101c;   /* IAT: buffer init */
extern void *g_100210ec;   /* IAT: free */
extern void *g_100210f4;   /* IAT: wcslen */
extern void *g_10021138;   /* IAT: swprintf-style */
extern unsigned short g_10026958;
extern unsigned short g_1002694c;
extern unsigned short g_1002693c;
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_100016b0(void);

__declspec(naked) void __cdecl FUN_1001bb30(void)
{
    __asm {
        sub  esp, 0x494
        push ebx
        push ebp
        push esi
        lea  eax, [esp + 0xc]
        push edi
        push eax
        mov  dword ptr [esp + 0x14], 0x94
        call dword ptr [g_1002101c]
        test eax, eax
        jz   L_bd72
        mov  eax, dword ptr [esp + 0x20]
        cmp  eax, 1
        jnz  L_bbe3
        mov  eax, dword ptr [esp + 0x14]
        xor  ebx, ebx
        cmp  eax, 4
        jnz  L_bbaa
        cmp  dword ptr [esp + 0x18], ebx
        ja   L_bbac
L_bb73:
        mov  esi, dword ptr [esp + 0x4a8]
        mov  ebp, dword ptr [g_100210ec]
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bb91
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bb91
        push eax
        call ebp
        add  esp, 4
L_bb91:
        push 0x100269d8
        mov  ecx, esi
        mov  dword ptr [esi], ebx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        call FUN_10001680
        jmp  L_bc74
L_bbaa:
        jbe  L_bb73
L_bbac:
        mov  esi, dword ptr [esp + 0x4a8]
        mov  ebp, dword ptr [g_100210ec]
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bbca
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bbca
        push eax
        call ebp
        add  esp, 4
L_bbca:
        push 0x100269c4
        mov  ecx, esi
        mov  dword ptr [esi], ebx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        call FUN_10001680
        jmp  L_bc74
L_bbe3:
        xor  ebx, ebx
        cmp  eax, ebx
        jnz  L_bc1d
        mov  esi, dword ptr [esp + 0x4a8]
        mov  ebp, dword ptr [g_100210ec]
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bc07
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bc07
        push eax
        call ebp
        add  esp, 4
L_bc07:
        push 0x100269ac
        mov  ecx, esi
        mov  dword ptr [esi], ebx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        call FUN_10001680
        jmp  L_bc74
L_bc1d:
        mov  eax, dword ptr [esp + 0x14]
        mov  edi, 0x10026998
        cmp  eax, 5
        jc   L_bc30
        mov  edi, 0x10026980
L_bc30:
        mov  esi, dword ptr [esp + 0x4a8]
        mov  ebp, dword ptr [g_100210ec]
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bc4e
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bc4e
        push eax
        call ebp
        add  esp, 4
L_bc4e:
        cmp  edi, ebx
        mov  dword ptr [esi], ebx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        jz   L_bc74
        cmp  word ptr [edi], bx
        jz   L_bc74
        push edi
        call dword ptr [g_100210f4]
        add  esp, 4
        mov  ecx, esi
        shl  eax, 1
        push eax
        push edi
        call FUN_100016b0
L_bc74:
        mov  ecx, dword ptr [esp + 0x18]
        mov  edx, dword ptr [esp + 0x14]
        mov  edi, dword ptr [g_10021138]
        push ecx
        push edx
        lea  eax, [esp + 0xac]
        push 0x10026974
        push eax
        call edi
        mov  esi, dword ptr [esp + 0x4bc]
        add  esp, 0x10
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bcae
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bcae
        push eax
        call ebp
        add  esp, 4
L_bcae:
        lea  ecx, [esp + 0xa4]
        mov  dword ptr [esi], ebx
        test ecx, ecx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        jz   L_bcee
        cmp  word ptr [esp + 0xa4], bx
        jz   L_bcee
        lea  edx, [esp + 0xa4]
        push edx
        call dword ptr [g_100210f4]
        add  esp, 4
        mov  ecx, esi
        shl  eax, 1
        push eax
        lea  eax, [esp + 0xa8]
        push eax
        call FUN_100016b0
L_bcee:
        lea  ecx, [esp + 0x24]
        lea  edx, [esp + 0xa4]
        push ecx
        push 0x100260fc
        push edx
        call edi
        mov  esi, dword ptr [esp + 0x4bc]
        add  esp, 0xc
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bd1d
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bd1d
        push eax
        call ebp
        add  esp, 4
L_bd1d:
        lea  eax, [esp + 0xa4]
        mov  dword ptr [esi], ebx
        test eax, eax
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        jz   L_be55
        cmp  word ptr [esp + 0xa4], bx
        jz   L_be55
        lea  ecx, [esp + 0xa4]
        push ecx
        call dword ptr [g_100210f4]
        add  esp, 4
        lea  edx, [esp + 0xa4]
        shl  eax, 1
        push eax
        push edx
        mov  ecx, esi
        call FUN_100016b0
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        add  esp, 0x494
        ret  0xc
L_bd72:
        mov  esi, dword ptr [esp + 0x4a8]
        mov  ebp, dword ptr [g_100210ec]
        xor  ebx, ebx
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bd92
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bd92
        push eax
        call ebp
        add  esp, 4
L_bd92:
        mov  edi, dword ptr [g_100210f4]
        mov  eax, 0x10026958
        test eax, eax
        mov  dword ptr [esi], ebx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        jz   L_bdc7
        cmp  word ptr [g_10026958], bx
        jz   L_bdc7
        push eax
        call edi
        add  esp, 4
        mov  ecx, esi
        shl  eax, 1
        push eax
        push 0x10026958
        call FUN_100016b0
L_bdc7:
        mov  esi, dword ptr [esp + 0x4ac]
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_bddf
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_bddf
        push eax
        call ebp
        add  esp, 4
L_bddf:
        mov  ecx, 0x1002694c
        mov  dword ptr [esi], ebx
        test ecx, ecx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        jz   L_be0e
        cmp  word ptr [g_1002694c], bx
        jz   L_be0e
        push ecx
        call edi
        add  esp, 4
        mov  ecx, esi
        shl  eax, 1
        push eax
        push 0x1002694c
        call FUN_100016b0
L_be0e:
        mov  esi, dword ptr [esp + 0x4b0]
        cmp  dword ptr [esi + 0xc], ebx
        jbe  L_be26
        mov  eax, dword ptr [esi]
        cmp  eax, ebx
        jz   L_be26
        push eax
        call ebp
        add  esp, 4
L_be26:
        mov  edx, 0x1002693c
        mov  dword ptr [esi], ebx
        test edx, edx
        mov  dword ptr [esi + 0x10], ebx
        mov  dword ptr [esi + 0xc], ebx
        jz   L_be55
        cmp  word ptr [g_1002693c], bx
        jz   L_be55
        push edx
        call edi
        add  esp, 4
        mov  ecx, esi
        shl  eax, 1
        push eax
        push 0x1002693c
        call FUN_100016b0
L_be55:
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        add  esp, 0x494
        ret  0xc
    }
}
