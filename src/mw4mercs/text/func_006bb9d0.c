/* FUN_006bb9d0 - gosScript debug-command registration (Show regions/margins/etc.) */

extern unsigned char g_82e238;      /* 0x0082e238 */
extern int g_82f3e4;                /* 0x0082f3e4 */
extern int g_859b90;                /* 0x00859b90 */
extern int g_83f5ec;                /* 0x0083f5ec */
extern int g_859794;                /* 0x00859794 */
extern int g_82e218;                /* 0x0082e218 */
extern int g_7b60a0;                /* 0x007b60a0 */
extern int g_82e2cc;                /* 0x0082e2cc */
extern int g_858940;                /* 0x00858940 */

extern void __cdecl FUN_0070f090(void);
extern void __cdecl FUN_006bf4c0(void);
extern void __cdecl FUN_006bcf90(void);
extern void __cdecl FUN_006ca950(void);

void __declspec(naked) func_006bb9d0(void)
{
    __asm {
        mov al, byte ptr [g_82e238]
        test al, al
        jnz done
        push 0x0
        push 0x0
        push 0x6bb750
        push 0x6bb740
        push 0x79b584
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x6bb7a0
        push 0x6bb790
        push 0x79b560
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x6bb7f0
        push 0x6bb7e0
        push 0x79b540
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x6bb840
        push 0x6bb830
        push 0x79b520
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x6bb890
        push 0x6bb880
        push 0x79b4f8
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x6bb700
        push 0x6bb6f0
        push 0x79b4d0
        call FUN_0070f090
        push 0x0
        push 0x0
        push 0x6bb8e0
        push 0x6bb8d0
        push 0x79b4a8
        call FUN_0070f090
        push 0x0
        push 0x6bb920
        push 0x6bb910
        push 0x6bb900
        push 0x79b478
        call FUN_0070f090
        push 0x0
        push 0x6bb920
        push 0x6bb940
        push 0x6bb930
        push 0x79b444
        call FUN_0070f090
        push 0x0
        push 0x6bb920
        push 0x6bb960
        push 0x6bb950
        push 0x79b414
        call FUN_0070f090
        mov dword ptr [g_82f3e4], 0x0
        mov byte ptr [g_82e238], 0x1
        call FUN_006bf4c0
        call FUN_006bcf90
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [g_859b90], 0x0
        mov dword ptr [g_83f5ec], 0x0
        mov dword ptr [g_859794], 0x6bcd10
        mov dword ptr [g_82e218], eax
        mov dword ptr [g_7b60a0], ecx
        call FUN_006ca950
        mov edx, dword ptr [g_858940]
        mov dword ptr [g_82e2cc], edx
done:
        ret 0x8
    }
}
