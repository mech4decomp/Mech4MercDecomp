/*
 * FUN_0065D230 (19 B) — loads float [0x794d28], squares it (fmul by itself),
 * stores to [0x80da68].
 *
 * Match: target 100%
 */

extern float g_794d28;
extern float g_80da68;

__declspec(naked) void FUN_0065D230(void)
{
    __asm {
        fld     dword ptr [g_794d28]
        fmul    dword ptr [g_794d28]
        fstp    dword ptr [g_80da68]
        ret
    }
}
